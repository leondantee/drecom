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

// Function: entry_0015f3ec
// Address: 0x15f3ec - 0x15f488
void entry_0015f3ec_0x15f3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f3ec_0x15f3ec");
#endif

    switch (ctx->pc) {
        case 0x15f3fcu: goto label_15f3fc;
        case 0x15f458u: goto label_15f458;
        case 0x15f468u: goto label_15f468;
        default: break;
    }

    ctx->pc = 0x15f3ecu;

    // 0x15f3ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f3f0: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x15f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f3f4: 0xc067844  jal         func_19E110
    ctx->pc = 0x15F3F4u;
    SET_GPR_U32(ctx, 31, 0x15F3FCu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x15F3F4u, 0x15F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3FCu;
label_15f3fc:
    // 0x15f3fc: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f400: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15f400u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f404: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x15f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f408: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f408u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15f40c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f410: 0x0  nop
    ctx->pc = 0x15f410u;
    // NOP
    // 0x15f414: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f41c: 0x0  nop
    ctx->pc = 0x15f41cu;
    // NOP
    // 0x15f420: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f424: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15f428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f42c: 0x0  nop
    ctx->pc = 0x15f42cu;
    // NOP
    // 0x15f430: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f43c: 0x0  nop
    ctx->pc = 0x15f43cu;
    // NOP
    // 0x15f440: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f444: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f448: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f44c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f450: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F450u;
    SET_GPR_U32(ctx, 31, 0x15F458u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F458u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F458u) { return; }
    ctx->pc = 0x15F458u;
label_15f458:
    // 0x15f458: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f45c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x15f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15f460: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15F460u;
    SET_GPR_U32(ctx, 31, 0x15F468u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15F460u, 0x15F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F468u;
label_15f468:
    // 0x15f468: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x15f46c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f470: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x15f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
    // 0x15f474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F474u;
    {
        const bool branch_taken_0x15f474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f474) {
            ctx->pc = 0x15F488u;
            return;
        }
    }
    ctx->pc = 0x15F47Cu;
    // 0x15f47c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f47cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f480: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x15F480u;
    {
        const bool branch_taken_0x15f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f480) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F488u;
}
