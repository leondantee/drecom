#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00229424
// Address: 0x229424 - 0x2294e0
void entry_00229424_0x229424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229424_0x229424");
#endif

    switch (ctx->pc) {
        case 0x229450u: goto label_229450;
        case 0x22946cu: goto label_22946c;
        case 0x229484u: goto label_229484;
        case 0x229490u: goto label_229490;
        default: break;
    }

    ctx->pc = 0x229424u;

    // 0x229424: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229428: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22942c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229430: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229434: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x229434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x229438: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x229438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22943c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x229440: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x229440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x229444: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x229444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229448: 0xc05c848  jal         func_172120
    ctx->pc = 0x229448u;
    SET_GPR_U32(ctx, 31, 0x229450u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x229448u, 0x229450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229450u;
label_229450:
    // 0x229450: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x229450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x229454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229458: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x229458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22945c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x22945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229460: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x229460u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229464: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229464u;
    SET_GPR_U32(ctx, 31, 0x22946Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229464u, 0x22946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22946Cu;
label_22946c:
    // 0x22946c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229470: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x229470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x229474: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229478: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x229478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22947c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22947Cu;
    SET_GPR_U32(ctx, 31, 0x229484u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22947Cu, 0x229484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229484u;
label_229484:
    // 0x229484: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229488: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x229488u;
    SET_GPR_U32(ctx, 31, 0x229490u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x229488u, 0x229490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229490u;
label_229490:
    // 0x229490: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229494: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x229494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x229498: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x229498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22949c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2294a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2294A0u;
    {
        const bool branch_taken_0x2294a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2294a0) {
            ctx->pc = 0x2294E0u;
            return;
        }
    }
    ctx->pc = 0x2294A8u;
    // 0x2294a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2294ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2294acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2294b0: 0x24523520  addiu       $s2, $v0, 0x3520
    ctx->pc = 0x2294b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x2294b4: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x2294b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2294b8: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x2294b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2294bc: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x2294bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2294c0: 0xa464002e  sh          $a0, 0x2E($v1)
    ctx->pc = 0x2294c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 4));
    // 0x2294c4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2294c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2294c8: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x2294c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2294cc: 0xa445002a  sh          $a1, 0x2A($v0)
    ctx->pc = 0x2294ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x2294d0: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2294d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2294d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2294d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2294d8: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x2294d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2294dc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2294dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    ctx->pc = 0x2294e0u;
}
