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

// Function: mem_disp
// Address: 0x295900 - 0x295bc0
void mem_disp_0x295900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mem_disp_0x295900");
#endif

    switch (ctx->pc) {
        case 0x29594cu: goto label_29594c;
        case 0x295980u: goto label_295980;
        case 0x2959a8u: goto label_2959a8;
        case 0x2959b4u: goto label_2959b4;
        case 0x2959f0u: goto label_2959f0;
        case 0x295a2cu: goto label_295a2c;
        case 0x295a70u: goto label_295a70;
        case 0x295ab8u: goto label_295ab8;
        case 0x295ac0u: goto label_295ac0;
        case 0x295b3cu: goto label_295b3c;
        case 0x295b8cu: goto label_295b8c;
        default: break;
    }

    ctx->pc = 0x295900u;

    // 0x295900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x295900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x295904: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x295904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x295908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29590c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x295914: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x295914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x295918: 0x24516150  addiu       $s1, $v0, 0x6150
    ctx->pc = 0x295918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x29591c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x29591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295920: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295924: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x295924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
    // 0x295928: 0x34420703  ori         $v0, $v0, 0x703
    ctx->pc = 0x295928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1795);
    // 0x29592c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x29592cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295930: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295934: 0x244517b0  addiu       $a1, $v0, 0x17B0
    ctx->pc = 0x295934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6064));
    // 0x295938: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x295938u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29593c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x29593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x295940: 0x2447c9e0  addiu       $a3, $v0, -0x3620
    ctx->pc = 0x295940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953440));
    // 0x295944: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295944u;
    SET_GPR_U32(ctx, 31, 0x29594Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295944u, 0x29594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29594Cu;
label_29594c:
    // 0x29594c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x29594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295950: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295954: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x295954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
    // 0x295958: 0x34420704  ori         $v0, $v0, 0x704
    ctx->pc = 0x295958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1796);
    // 0x29595c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x29595cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295960: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295964: 0x244517b0  addiu       $a1, $v0, 0x17B0
    ctx->pc = 0x295964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6064));
    // 0x295968: 0x3c02000d  lui         $v0, 0xD
    ctx->pc = 0x295968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13 << 16));
    // 0x29596c: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x29596cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x295970: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x295970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x295974: 0x2447c9df  addiu       $a3, $v0, -0x3621
    ctx->pc = 0x295974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953439));
    // 0x295978: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295978u;
    SET_GPR_U32(ctx, 31, 0x295980u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295978u, 0x295980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295980u;
label_295980:
    // 0x295980: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295984: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295988: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x295988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
    // 0x29598c: 0x34420705  ori         $v0, $v0, 0x705
    ctx->pc = 0x29598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1797);
    // 0x295990: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x295990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295994: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295998: 0x244517d0  addiu       $a1, $v0, 0x17D0
    ctx->pc = 0x295998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6096));
    // 0x29599c: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x29599cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x2959a0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2959A0u;
    SET_GPR_U32(ctx, 31, 0x2959A8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2959A0u, 0x2959A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959A8u;
label_2959a8:
    // 0x2959a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2959a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2959ac: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2959ACu;
    {
        const bool branch_taken_0x2959ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2959ac) {
            ctx->pc = 0x295B98u;
            goto label_295b98;
        }
    }
    ctx->pc = 0x2959B4u;
label_2959b4:
    // 0x2959b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2959b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2959b8: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x2959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2959bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2959bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2959c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2959c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2959c4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2959c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2959c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2959c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2959cc: 0x3c021d06  lui         $v0, 0x1D06
    ctx->pc = 0x2959ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7430 << 16));
    // 0x2959d0: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x2959d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x2959d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2959d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2959d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2959d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2959dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2959dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2959e0: 0x244517e8  addiu       $a1, $v0, 0x17E8
    ctx->pc = 0x2959e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6120));
    // 0x2959e4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2959e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2959e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2959E8u;
    SET_GPR_U32(ctx, 31, 0x2959F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2959E8u, 0x2959F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959F0u;
label_2959f0:
    // 0x2959f0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2959f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2959f4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2959f8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2959f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2959fc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2959fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295a00: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295a04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a08: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x295a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x295a0c: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x295a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x295a10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295a14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295a18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295a1c: 0x244517f8  addiu       $a1, $v0, 0x17F8
    ctx->pc = 0x295a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6136));
    // 0x295a20: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x295a20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x295a24: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295A24u;
    SET_GPR_U32(ctx, 31, 0x295A2Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295A24u, 0x295A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A2Cu;
label_295a2c:
    // 0x295a2c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295a30: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x295a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x295a34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a38: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295a38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295a3c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295a40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a44: 0x3c021d06  lui         $v0, 0x1D06
    ctx->pc = 0x295a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7430 << 16));
    // 0x295a48: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x295a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x295a4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295a50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295a54: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295a58: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x295a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295a5c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295a60: 0x24451808  addiu       $a1, $v0, 0x1808
    ctx->pc = 0x295a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6152));
    // 0x295a64: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x295a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x295a68: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295A68u;
    SET_GPR_U32(ctx, 31, 0x295A70u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295A68u, 0x295A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A70u;
label_295a70:
    // 0x295a70: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295a74: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x295a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x295a78: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a7c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295a7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295a80: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295a84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a88: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x295a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x295a8c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x295a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x295a90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295a94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295a98: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295a9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x295a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295aa0: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x295aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x295aa4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x295aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x295aa8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295aac: 0x24451808  addiu       $a1, $v0, 0x1808
    ctx->pc = 0x295aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6152));
    // 0x295ab0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295AB0u;
    SET_GPR_U32(ctx, 31, 0x295AB8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295AB0u, 0x295AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AB8u;
label_295ab8:
    // 0x295ab8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x295ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295abc: 0x0  nop
    ctx->pc = 0x295abcu;
    // NOP
label_295ac0:
    // 0x295ac0: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x295ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295ac4: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x295ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295ac8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x295ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x295acc: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x295accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x295ad0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x295ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x295ad4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x295ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x295ad8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295adc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x295ae0: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x295AE0u;
    {
        const bool branch_taken_0x295ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ae0) {
            ctx->pc = 0x295AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295ac0;
        }
    }
    ctx->pc = 0x295AE8u;
    // 0x295ae8: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x295AE8u;
    {
        const bool branch_taken_0x295ae8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ae8) {
            ctx->pc = 0x295B90u;
            goto label_295b90;
        }
    }
    ctx->pc = 0x295AF0u;
    // 0x295af0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295af4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x295af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x295af8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295afc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295afcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295b00: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295b04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295b08: 0x3c021d06  lui         $v0, 0x1D06
    ctx->pc = 0x295b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7430 << 16));
    // 0x295b0c: 0x34421c00  ori         $v0, $v0, 0x1C00
    ctx->pc = 0x295b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7168);
    // 0x295b10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295b14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295b18: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295b1c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x295b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295b20: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x295b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x295b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295b28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295b2c: 0x24451810  addiu       $a1, $v0, 0x1810
    ctx->pc = 0x295b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6160));
    // 0x295b30: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x295b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x295b34: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295B34u;
    SET_GPR_U32(ctx, 31, 0x295B3Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295B34u, 0x295B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B3Cu;
label_295b3c:
    // 0x295b3c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295b40: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x295b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x295b44: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295b48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295b48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295b4c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295b50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295b54: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x295b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x295b58: 0x34421c00  ori         $v0, $v0, 0x1C00
    ctx->pc = 0x295b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7168);
    // 0x295b5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295b60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295b64: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295b68: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x295b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295b6c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x295b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x295b70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x295b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295b74: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x295b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x295b78: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x295b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x295b7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295b80: 0x24451810  addiu       $a1, $v0, 0x1810
    ctx->pc = 0x295b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6160));
    // 0x295b84: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295B84u;
    SET_GPR_U32(ctx, 31, 0x295B8Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295B84u, 0x295B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B8Cu;
label_295b8c:
    // 0x295b8c: 0x0  nop
    ctx->pc = 0x295b8cu;
    // NOP
label_295b90:
    // 0x295b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x295b94: 0x0  nop
    ctx->pc = 0x295b94u;
    // NOP
label_295b98:
    // 0x295b98: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x295b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x295b9c: 0x1460ff85  bnez        $v1, . + 4 + (-0x7B << 2)
    ctx->pc = 0x295B9Cu;
    {
        const bool branch_taken_0x295b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295b9c) {
            ctx->pc = 0x2959B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2959b4;
        }
    }
    ctx->pc = 0x295BA4u;
    // 0x295ba4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x295ba4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x295bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295bb4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x295bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x295bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x295BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295BC0u;
}
