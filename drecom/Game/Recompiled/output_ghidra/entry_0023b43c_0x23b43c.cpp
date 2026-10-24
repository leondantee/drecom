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

// Function: entry_0023b43c
// Address: 0x23b43c - 0x23b51c
void entry_0023b43c_0x23b43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b43c_0x23b43c");
#endif

    switch (ctx->pc) {
        case 0x23b468u: goto label_23b468;
        case 0x23b484u: goto label_23b484;
        case 0x23b49cu: goto label_23b49c;
        case 0x23b4a8u: goto label_23b4a8;
        case 0x23b4e8u: goto label_23b4e8;
        case 0x23b514u: goto label_23b514;
        default: break;
    }

    ctx->pc = 0x23b43cu;

    // 0x23b43c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b440: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b444: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b448: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b44c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23b450: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23b454: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23b454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23b458: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23b45c: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23b460: 0xc05c848  jal         func_172120
    ctx->pc = 0x23B460u;
    SET_GPR_U32(ctx, 31, 0x23B468u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23B460u, 0x23B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B468u;
label_23b468:
    // 0x23b468: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x23b46c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b470: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b474: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b478: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23b478u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b47c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23B47Cu;
    SET_GPR_U32(ctx, 31, 0x23B484u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23B47Cu, 0x23B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B484u;
label_23b484:
    // 0x23b484: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b488: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23b48c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b490: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23b494: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23B494u;
    SET_GPR_U32(ctx, 31, 0x23B49Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23B494u, 0x23B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B49Cu;
label_23b49c:
    // 0x23b49c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4a0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23B4A0u;
    SET_GPR_U32(ctx, 31, 0x23B4A8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23B4A0u, 0x23B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4A8u;
label_23b4a8:
    // 0x23b4a8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4ac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23b4acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23b4b0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x23B4B0u;
    {
        const bool branch_taken_0x23b4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4b0) {
            ctx->pc = 0x23B5C8u;
            return;
        }
    }
    ctx->pc = 0x23B4B8u;
    // 0x23b4b8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4bc: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x23b4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23b4c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23b4c4: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x23b4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x23b4c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4cc: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23b4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23b4d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23b4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23b4d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23b4d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23b4d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B4D8u;
    {
        const bool branch_taken_0x23b4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4d8) {
            ctx->pc = 0x23B51Cu;
            return;
        }
    }
    ctx->pc = 0x23B4E0u;
    // 0x23b4e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B4E0u;
    SET_GPR_U32(ctx, 31, 0x23B4E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B4E0u, 0x23B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4E8u;
label_23b4e8:
    // 0x23b4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b4ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b4f0: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x23b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x23b4f4: 0x34462800  ori         $a2, $v0, 0x2800
    ctx->pc = 0x23b4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x23b4f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4fc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23b500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23b504: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b508: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23b508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23b50c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23B50Cu;
    SET_GPR_U32(ctx, 31, 0x23B514u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23B50Cu, 0x23B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B514u;
label_23b514:
    // 0x23b514: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x23B514u;
    {
        const bool branch_taken_0x23b514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b514) {
            ctx->pc = 0x23B7C8u;
            return;
        }
    }
    ctx->pc = 0x23B51Cu;
}
