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

// Function: entry_001a5de0
// Address: 0x1a5de0 - 0x1a5f48
void entry_001a5de0_0x1a5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5de0_0x1a5de0");
#endif

    switch (ctx->pc) {
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5f2cu: goto label_1a5f2c;
        default: break;
    }

    ctx->pc = 0x1a5de0u;

    // 0x1a5de0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5de4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5de8: 0x26250474  addiu       $a1, $s1, 0x474
    ctx->pc = 0x1a5de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1140));
    // 0x1a5dec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DECu;
    SET_GPR_U32(ctx, 31, 0x1A5DF4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DECu, 0x1A5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DF4u;
label_1a5df4:
    // 0x1a5df4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5df8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5dfc: 0x26220510  addiu       $v0, $s1, 0x510
    ctx->pc = 0x1a5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1296));
    // 0x1a5e00: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a5e00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5e04: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5E04u;
    SET_GPR_U32(ctx, 31, 0x1A5E0Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5E04u, 0x1A5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E0Cu;
label_1a5e0c:
    // 0x1a5e0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5e10: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5e14: 0x262505e8  addiu       $a1, $s1, 0x5E8
    ctx->pc = 0x1a5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1512));
    // 0x1a5e18: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5E18u;
    SET_GPR_U32(ctx, 31, 0x1A5E20u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5E18u, 0x1A5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E20u;
label_1a5e20:
    // 0x1a5e20: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5e24: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5e28: 0x26250604  addiu       $a1, $s1, 0x604
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1540));
    // 0x1a5e2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5E2Cu, 0x1A5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E34u;
label_1a5e34:
    // 0x1a5e34: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a5e38: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a5e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a5e3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5e40: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5e44: 0x34420401  ori         $v0, $v0, 0x401
    ctx->pc = 0x1a5e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1025);
    // 0x1a5e48: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5e4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5e50: 0x2445f0d8  addiu       $a1, $v0, -0xF28
    ctx->pc = 0x1a5e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963416));
    // 0x1a5e54: 0x8e06030c  lw          $a2, 0x30C($s0)
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5e58: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5E58u;
    SET_GPR_U32(ctx, 31, 0x1A5E60u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5E58u, 0x1A5E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E60u;
label_1a5e60:
    // 0x1a5e60: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x1a5e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5e64: 0x30463fff  andi        $a2, $v0, 0x3FFF
    ctx->pc = 0x1a5e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a5e68: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a5e6c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a5e70: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a5e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5e74: 0x3c031c08  lui         $v1, 0x1C08
    ctx->pc = 0x1a5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5e78: 0x34620e01  ori         $v0, $v1, 0xE01
    ctx->pc = 0x1a5e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3585);
    // 0x1a5e7c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x1a5e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5e80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5e84: 0x2445f0e8  addiu       $a1, $v0, -0xF18
    ctx->pc = 0x1a5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963432));
    // 0x1a5e88: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5E88u;
    SET_GPR_U32(ctx, 31, 0x1A5E90u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5E88u, 0x1A5E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E90u;
label_1a5e90:
    // 0x1a5e90: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5e94: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5e98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5e9c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a5e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5ea0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a5ea4: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a5ea8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a5ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5eac: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1a5eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1a5eb0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a5eb4: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x1a5eb8: 0x34630808  ori         $v1, $v1, 0x808
    ctx->pc = 0x1a5eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x1a5ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a5ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5ec0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5ec4: 0x34470402  ori         $a3, $v0, 0x402
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1026);
    // 0x1a5ec8: 0xe32025  or          $a0, $a3, $v1
    ctx->pc = 0x1a5ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a5ecc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5ed0: 0x2445f0f8  addiu       $a1, $v0, -0xF08
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963448));
    // 0x1a5ed4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5ED4u;
    SET_GPR_U32(ctx, 31, 0x1A5EDCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5ED4u, 0x1A5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EDCu;
label_1a5edc:
    // 0x1a5edc: 0x8e02030c  lw          $v0, 0x30C($s0)
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5ee0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5ee4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5ee8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a5eec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a5ef0: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x1a5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a5ef4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5ef8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a5efc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a5efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5f00: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x1a5f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x1a5f04: 0x34820808  ori         $v0, $a0, 0x808
    ctx->pc = 0x1a5f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2056);
    // 0x1a5f08: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1a5f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5f0c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5f10: 0x34460403  ori         $a2, $v0, 0x403
    ctx->pc = 0x1a5f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1027);
    // 0x1a5f14: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x1a5f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1a5f18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5f1c: 0x2445f108  addiu       $a1, $v0, -0xEF8
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963464));
    // 0x1a5f20: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1a5f20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a5f24: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5F24u;
    SET_GPR_U32(ctx, 31, 0x1A5F2Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5F24u, 0x1A5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F2Cu;
label_1a5f2c:
    // 0x1a5f2c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1a5f2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5f3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a5f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F48u;
}
