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

// Function: Pl_highlight_on
// Address: 0x14e8b0 - 0x14ecc0
void Pl_highlight_on_0x14e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_highlight_on_0x14e8b0");
#endif

    switch (ctx->pc) {
        case 0x14e9b4u: goto label_14e9b4;
        case 0x14e9ccu: goto label_14e9cc;
        case 0x14e9e8u: goto label_14e9e8;
        case 0x14ea00u: goto label_14ea00;
        case 0x14ea2cu: goto label_14ea2c;
        case 0x14ea44u: goto label_14ea44;
        case 0x14ea70u: goto label_14ea70;
        case 0x14ea88u: goto label_14ea88;
        case 0x14eac8u: goto label_14eac8;
        case 0x14eae0u: goto label_14eae0;
        case 0x14eb0cu: goto label_14eb0c;
        case 0x14eb24u: goto label_14eb24;
        case 0x14eb58u: goto label_14eb58;
        case 0x14eb68u: goto label_14eb68;
        case 0x14eb84u: goto label_14eb84;
        case 0x14eb94u: goto label_14eb94;
        case 0x14ebc0u: goto label_14ebc0;
        case 0x14ebd0u: goto label_14ebd0;
        case 0x14ebfcu: goto label_14ebfc;
        case 0x14ec0cu: goto label_14ec0c;
        case 0x14ec4cu: goto label_14ec4c;
        case 0x14ec5cu: goto label_14ec5c;
        case 0x14ec88u: goto label_14ec88;
        case 0x14ec98u: goto label_14ec98;
        default: break;
    }

    ctx->pc = 0x14e8b0u;

    // 0x14e8b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14e8b4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x14e8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x14e8b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14e8bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14e8c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14e8c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e8d0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14e8d4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x14e8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x14e8d8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14e8dc: 0x2471a4a0  addiu       $s1, $v1, -0x5B60
    ctx->pc = 0x14e8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x14e8e0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14e8e4: 0x2472b700  addiu       $s2, $v1, -0x4900
    ctx->pc = 0x14e8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x14e8e8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14e8ec: 0x24739240  addiu       $s3, $v1, -0x6DC0
    ctx->pc = 0x14e8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x14e8f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x14e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14e8f4: 0x2475a530  addiu       $s5, $v1, -0x5AD0
    ctx->pc = 0x14e8f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x14e8f8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14e8fc: 0x2474c960  addiu       $s4, $v1, -0x36A0
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
    // 0x14e900: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x14e904: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14e904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x14e908: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14e908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e90c: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x14E90Cu;
    {
        const bool branch_taken_0x14e90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e90c) {
            ctx->pc = 0x14EB2Cu;
            goto label_14eb2c;
        }
    }
    ctx->pc = 0x14E914u;
    // 0x14e914: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e918: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x14e918u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14e91c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14e920: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14e920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e924: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14E924u;
    {
        const bool branch_taken_0x14e924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e924) {
            ctx->pc = 0x14E988u;
            goto label_14e988;
        }
    }
    ctx->pc = 0x14E92Cu;
    // 0x14e92c: 0x860413c0  lh          $a0, 0x13C0($s0)
    ctx->pc = 0x14e92cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e930: 0x860313c2  lh          $v1, 0x13C2($s0)
    ctx->pc = 0x14e930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5058)));
    // 0x14e934: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14e934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14e938: 0xa60313c0  sh          $v1, 0x13C0($s0)
    ctx->pc = 0x14e938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 3));
    // 0x14e93c: 0x860313c0  lh          $v1, 0x13C0($s0)
    ctx->pc = 0x14e93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e940: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14e940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x14e944: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14e944u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14e948: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x14e948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x14e94c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E94Cu;
    {
        const bool branch_taken_0x14e94c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e94c) {
            ctx->pc = 0x14E95Cu;
            goto label_14e95c;
        }
    }
    ctx->pc = 0x14E954u;
    // 0x14e954: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14e954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14e958: 0xa60313c0  sh          $v1, 0x13C0($s0)
    ctx->pc = 0x14e958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 3));
label_14e95c:
    // 0x14e95c: 0x860313c0  lh          $v1, 0x13C0($s0)
    ctx->pc = 0x14e95cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e960: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14e960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x14e964: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14e964u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14e968: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E968u;
    {
        const bool branch_taken_0x14e968 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14e968) {
            ctx->pc = 0x14E988u;
            goto label_14e988;
        }
    }
    ctx->pc = 0x14E970u;
    // 0x14e970: 0xa60013c0  sh          $zero, 0x13C0($s0)
    ctx->pc = 0x14e970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x14e974: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e978: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x14e978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x14e97c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14e980: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14e980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e984: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14e984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_14e988:
    // 0x14e988: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14e988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e98c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14e98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14e990: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E990u;
    {
        const bool branch_taken_0x14e990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e990) {
            ctx->pc = 0x14EA00u;
            goto label_14ea00;
        }
    }
    ctx->pc = 0x14E998u;
    // 0x14e998: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e99c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e9a0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14e9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e9a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14e9a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e9ac: 0xc096304  jal         func_258C10
    ctx->pc = 0x14E9ACu;
    SET_GPR_U32(ctx, 31, 0x14E9B4u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14E9ACu, 0x14E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9B4u;
label_14e9b4:
    // 0x14e9b4: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14e9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e9b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9bc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14e9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14e9c4: 0xc096348  jal         func_258D20
    ctx->pc = 0x14E9C4u;
    SET_GPR_U32(ctx, 31, 0x14E9CCu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14E9C4u, 0x14E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9CCu;
label_14e9cc:
    // 0x14e9cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e9d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e9d4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14e9d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e9d8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14e9d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14e9dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e9e0: 0xc096304  jal         func_258C10
    ctx->pc = 0x14E9E0u;
    SET_GPR_U32(ctx, 31, 0x14E9E8u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14E9E0u, 0x14E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9E8u;
label_14e9e8:
    // 0x14e9e8: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14e9e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e9ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9f0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14e9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9f4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14e9f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14e9f8: 0xc096348  jal         func_258D20
    ctx->pc = 0x14E9F8u;
    SET_GPR_U32(ctx, 31, 0x14EA00u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14E9F8u, 0x14EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA00u;
label_14ea00:
    // 0x14ea00: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ea04: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ea08: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14EA08u;
    {
        const bool branch_taken_0x14ea08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea08) {
            ctx->pc = 0x14EA44u;
            goto label_14ea44;
        }
    }
    ctx->pc = 0x14EA10u;
    // 0x14ea10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ea10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ea14: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ea18: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ea18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ea1c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ea1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ea20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ea24: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EA24u;
    SET_GPR_U32(ctx, 31, 0x14EA2Cu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EA24u, 0x14EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA2Cu;
label_14ea2c:
    // 0x14ea2c: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14ea2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14ea30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea34: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ea34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea38: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ea38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ea3c: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EA3Cu;
    SET_GPR_U32(ctx, 31, 0x14EA44u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EA3Cu, 0x14EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA44u;
label_14ea44:
    // 0x14ea44: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ea48: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ea4c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14EA4Cu;
    {
        const bool branch_taken_0x14ea4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea4c) {
            ctx->pc = 0x14EA88u;
            goto label_14ea88;
        }
    }
    ctx->pc = 0x14EA54u;
    // 0x14ea54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ea58: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ea5c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ea5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ea60: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ea60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ea64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ea68: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EA68u;
    SET_GPR_U32(ctx, 31, 0x14EA70u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EA68u, 0x14EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA70u;
label_14ea70:
    // 0x14ea70: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14ea74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea78: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ea78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea7c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ea7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ea80: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EA80u;
    SET_GPR_U32(ctx, 31, 0x14EA88u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EA80u, 0x14EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA88u;
label_14ea88:
    // 0x14ea88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14ea8c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ea90: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14EA90u;
    {
        const bool branch_taken_0x14ea90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea90) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14EA98u;
    // 0x14ea98: 0x920313f8  lbu         $v1, 0x13F8($s0)
    ctx->pc = 0x14ea98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x14ea9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14ea9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14eaa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14eaa4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14EAA4u;
    {
        const bool branch_taken_0x14eaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14eaa4) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14EAACu;
    // 0x14eaac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eab0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eab4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eab8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14eab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14eabc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14eac0: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EAC0u;
    SET_GPR_U32(ctx, 31, 0x14EAC8u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EAC0u, 0x14EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAC8u;
label_14eac8:
    // 0x14eac8: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14eac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14eacc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ead0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ead0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ead4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14ead4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14ead8: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EAD8u;
    SET_GPR_U32(ctx, 31, 0x14EAE0u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EAD8u, 0x14EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAE0u;
label_14eae0:
    // 0x14eae0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14eae4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14eae8: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x14EAE8u;
    {
        const bool branch_taken_0x14eae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eae8) {
            ctx->pc = 0x14EC98u;
            goto label_14ec98;
        }
    }
    ctx->pc = 0x14EAF0u;
    // 0x14eaf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eaf4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eaf8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eaf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eafc: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14eafcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14eb00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14eb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14eb04: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EB04u;
    SET_GPR_U32(ctx, 31, 0x14EB0Cu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EB04u, 0x14EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB0Cu;
label_14eb0c:
    // 0x14eb0c: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14eb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14eb10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14eb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14eb14: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14eb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14eb18: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14eb18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14eb1c: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EB1Cu;
    SET_GPR_U32(ctx, 31, 0x14EB24u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EB1Cu, 0x14EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB24u;
label_14eb24:
    // 0x14eb24: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x14EB24u;
    {
        const bool branch_taken_0x14eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb24) {
            ctx->pc = 0x14EC98u;
            goto label_14ec98;
        }
    }
    ctx->pc = 0x14EB2Cu;
label_14eb2c:
    // 0x14eb2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14eb30: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14eb34: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14EB34u;
    {
        const bool branch_taken_0x14eb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb34) {
            ctx->pc = 0x14EB94u;
            goto label_14eb94;
        }
    }
    ctx->pc = 0x14EB3Cu;
    // 0x14eb3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eb40: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eb44: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eb44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eb48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14eb48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14eb4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14eb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14eb50: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EB50u;
    SET_GPR_U32(ctx, 31, 0x14EB58u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EB50u, 0x14EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB58u;
label_14eb58:
    // 0x14eb58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14eb58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14eb5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14eb60: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EB60u;
    SET_GPR_U32(ctx, 31, 0x14EB68u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EB60u, 0x14EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB68u;
label_14eb68:
    // 0x14eb68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eb6c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eb70: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eb70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eb74: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14eb74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14eb78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14eb78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14eb7c: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EB7Cu;
    SET_GPR_U32(ctx, 31, 0x14EB84u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EB7Cu, 0x14EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB84u;
label_14eb84:
    // 0x14eb84: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14eb84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14eb88: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14eb8c: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EB8Cu;
    SET_GPR_U32(ctx, 31, 0x14EB94u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EB8Cu, 0x14EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB94u;
label_14eb94:
    // 0x14eb94: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14eb98: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14eb9c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EB9Cu;
    {
        const bool branch_taken_0x14eb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb9c) {
            ctx->pc = 0x14EBD0u;
            goto label_14ebd0;
        }
    }
    ctx->pc = 0x14EBA4u;
    // 0x14eba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eba8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ebac: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ebacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ebb0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ebb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ebb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ebb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ebb8: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EBB8u;
    SET_GPR_U32(ctx, 31, 0x14EBC0u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EBB8u, 0x14EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBC0u;
label_14ebc0:
    // 0x14ebc0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ebc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ebc4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ebc8: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EBC8u;
    SET_GPR_U32(ctx, 31, 0x14EBD0u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EBC8u, 0x14EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBD0u;
label_14ebd0:
    // 0x14ebd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ebd4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ebd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EBD8u;
    {
        const bool branch_taken_0x14ebd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebd8) {
            ctx->pc = 0x14EC0Cu;
            goto label_14ec0c;
        }
    }
    ctx->pc = 0x14EBE0u;
    // 0x14ebe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ebe4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ebe8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ebe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ebec: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ebecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ebf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ebf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ebf4: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EBF4u;
    SET_GPR_U32(ctx, 31, 0x14EBFCu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EBF4u, 0x14EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBFCu;
label_14ebfc:
    // 0x14ebfc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ebfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ec00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ec04: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EC04u;
    SET_GPR_U32(ctx, 31, 0x14EC0Cu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EC04u, 0x14EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC0Cu;
label_14ec0c:
    // 0x14ec0c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14ec10: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ec14: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EC14u;
    {
        const bool branch_taken_0x14ec14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec14) {
            ctx->pc = 0x14EC5Cu;
            goto label_14ec5c;
        }
    }
    ctx->pc = 0x14EC1Cu;
    // 0x14ec1c: 0x920313f8  lbu         $v1, 0x13F8($s0)
    ctx->pc = 0x14ec1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x14ec20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14ec20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14ec24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ec28: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EC28u;
    {
        const bool branch_taken_0x14ec28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ec28) {
            ctx->pc = 0x14EC5Cu;
            goto label_14ec5c;
        }
    }
    ctx->pc = 0x14EC30u;
    // 0x14ec30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ec34: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ec38: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ec38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ec3c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14ec3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14ec40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ec40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ec44: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EC44u;
    SET_GPR_U32(ctx, 31, 0x14EC4Cu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EC44u, 0x14EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC4Cu;
label_14ec4c:
    // 0x14ec4c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14ec4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14ec50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ec50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ec54: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EC54u;
    SET_GPR_U32(ctx, 31, 0x14EC5Cu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EC54u, 0x14EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC5Cu;
label_14ec5c:
    // 0x14ec5c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14ec60: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ec64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EC64u;
    {
        const bool branch_taken_0x14ec64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec64) {
            ctx->pc = 0x14EC98u;
            goto label_14ec98;
        }
    }
    ctx->pc = 0x14EC6Cu;
    // 0x14ec6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ec6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ec70: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ec74: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ec74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ec78: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14ec78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14ec7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ec7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ec80: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EC80u;
    SET_GPR_U32(ctx, 31, 0x14EC88u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EC80u, 0x14EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC88u;
label_14ec88:
    // 0x14ec88: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14ec88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14ec8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ec90: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EC90u;
    SET_GPR_U32(ctx, 31, 0x14EC98u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EC90u, 0x14EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC98u;
label_14ec98:
    // 0x14ec98: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x14ec98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ec9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14ec9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14eca0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14eca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14eca4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14eca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14eca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ecac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ecacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ecb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ecb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ecb4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x14ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ECC0u;
}
