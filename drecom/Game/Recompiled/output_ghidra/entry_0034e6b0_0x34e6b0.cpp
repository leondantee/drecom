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

// Function: entry_0034e6b0
// Address: 0x34e6b0 - 0x34e750
void entry_0034e6b0_0x34e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e6b0_0x34e6b0");
#endif

    switch (ctx->pc) {
        case 0x34e6ecu: goto label_34e6ec;
        case 0x34e730u: goto label_34e730;
        default: break;
    }

    ctx->pc = 0x34e6b0u;

    // 0x34e6b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e6b4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e6b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34e6bc: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x34e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x34e6c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34e6c4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34e6c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e6cc: 0x2622002f  addiu       $v0, $s1, 0x2F
    ctx->pc = 0x34e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 47));
    // 0x34e6d0: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x34e6d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x34e6d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e6d8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34e6dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34e6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e6e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34e6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34e6e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34E6E4u;
    SET_GPR_U32(ctx, 31, 0x34E6ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34E6E4u, 0x34E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6ECu;
label_34e6ec:
    // 0x34e6ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e6f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e6f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34e6f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34e6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e6fc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34e700: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34e704: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e708: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34e708u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e70c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e710: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34e714: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34e714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34e718: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34e718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34e71c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34e720: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34e720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e724: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34e724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34e728: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34E728u;
    SET_GPR_U32(ctx, 31, 0x34E730u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34E728u, 0x34E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E730u;
label_34e730:
    // 0x34e730: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34e734: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x34e734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x34e738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34e738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34e73c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34e740: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x34e740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e744: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e748: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e74c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34e74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x34e750u;
}
