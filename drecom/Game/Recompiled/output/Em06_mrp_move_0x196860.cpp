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

// Function: Em06_mrp_move
// Address: 0x196860 - 0x197a88
void Em06_mrp_move_0x196860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_mrp_move_0x196860");
#endif

    switch (ctx->pc) {
        case 0x1968e4u: goto label_1968e4;
        case 0x196910u: goto label_196910;
        case 0x196944u: goto label_196944;
        case 0x196974u: goto label_196974;
        case 0x1969acu: goto label_1969ac;
        case 0x1969d8u: goto label_1969d8;
        case 0x196a10u: goto label_196a10;
        case 0x196a44u: goto label_196a44;
        case 0x196a74u: goto label_196a74;
        case 0x196b04u: goto label_196b04;
        case 0x196b34u: goto label_196b34;
        case 0x196b5cu: goto label_196b5c;
        case 0x196b84u: goto label_196b84;
        case 0x196bacu: goto label_196bac;
        case 0x196bdcu: goto label_196bdc;
        case 0x196c04u: goto label_196c04;
        case 0x196c2cu: goto label_196c2c;
        case 0x196da8u: goto label_196da8;
        case 0x196dc0u: goto label_196dc0;
        case 0x196dd0u: goto label_196dd0;
        case 0x196de0u: goto label_196de0;
        case 0x196df0u: goto label_196df0;
        case 0x196e00u: goto label_196e00;
        case 0x196e14u: goto label_196e14;
        case 0x196e24u: goto label_196e24;
        case 0x196e64u: goto label_196e64;
        case 0x196e8cu: goto label_196e8c;
        case 0x196eb4u: goto label_196eb4;
        case 0x196ee0u: goto label_196ee0;
        case 0x196f0cu: goto label_196f0c;
        case 0x196f34u: goto label_196f34;
        case 0x196f64u: goto label_196f64;
        case 0x196f98u: goto label_196f98;
        case 0x196fccu: goto label_196fcc;
        case 0x196fecu: goto label_196fec;
        case 0x197004u: goto label_197004;
        case 0x19701cu: goto label_19701c;
        case 0x197038u: goto label_197038;
        case 0x197048u: goto label_197048;
        case 0x197064u: goto label_197064;
        case 0x19707cu: goto label_19707c;
        case 0x197090u: goto label_197090;
        case 0x1970a8u: goto label_1970a8;
        case 0x197148u: goto label_197148;
        case 0x19717cu: goto label_19717c;
        case 0x1971b0u: goto label_1971b0;
        case 0x1971e8u: goto label_1971e8;
        case 0x19721cu: goto label_19721c;
        case 0x197250u: goto label_197250;
        case 0x197284u: goto label_197284;
        case 0x1972acu: goto label_1972ac;
        case 0x1972e0u: goto label_1972e0;
        case 0x197310u: goto label_197310;
        case 0x197338u: goto label_197338;
        case 0x197360u: goto label_197360;
        case 0x19738cu: goto label_19738c;
        case 0x1973bcu: goto label_1973bc;
        case 0x1973e8u: goto label_1973e8;
        case 0x197418u: goto label_197418;
        case 0x197450u: goto label_197450;
        case 0x197480u: goto label_197480;
        case 0x1974b4u: goto label_1974b4;
        case 0x1974e8u: goto label_1974e8;
        case 0x197518u: goto label_197518;
        case 0x197544u: goto label_197544;
        case 0x19757cu: goto label_19757c;
        case 0x1975acu: goto label_1975ac;
        case 0x1975e4u: goto label_1975e4;
        case 0x19761cu: goto label_19761c;
        case 0x197650u: goto label_197650;
        case 0x197680u: goto label_197680;
        case 0x1976b0u: goto label_1976b0;
        case 0x1976e0u: goto label_1976e0;
        case 0x197708u: goto label_197708;
        case 0x197734u: goto label_197734;
        case 0x197764u: goto label_197764;
        case 0x1977ccu: goto label_1977cc;
        case 0x1977f4u: goto label_1977f4;
        case 0x19784cu: goto label_19784c;
        case 0x197898u: goto label_197898;
        case 0x1978c0u: goto label_1978c0;
        case 0x1978d8u: goto label_1978d8;
        case 0x19795cu: goto label_19795c;
        case 0x1979acu: goto label_1979ac;
        case 0x1979ecu: goto label_1979ec;
        case 0x197a10u: goto label_197a10;
        case 0x197a44u: goto label_197a44;
        case 0x197a74u: goto label_197a74;
        default: break;
    }

    ctx->pc = 0x196860u;

    // 0x196860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196864: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x196864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x196868: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x196868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19686c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196870: 0x8423d340  lh          $v1, -0x2CC0($at)
    ctx->pc = 0x196870u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CD340u));
    // 0x196874: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x196874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196878: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196878u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19687c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196880: 0x1064006a  beq         $v1, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x196880u;
    {
        const bool branch_taken_0x196880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x196880) {
            ctx->pc = 0x196A2Cu;
            goto label_196a2c;
        }
    }
    ctx->pc = 0x196888u;
    // 0x196888: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x196888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19688c: 0x1065004e  beq         $v1, $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x19688Cu;
    {
        const bool branch_taken_0x19688c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19688c) {
            ctx->pc = 0x1969C8u;
            goto label_1969c8;
        }
    }
    ctx->pc = 0x196894u;
    // 0x196894: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x196894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196898: 0x10670031  beq         $v1, $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x196898u;
    {
        const bool branch_taken_0x196898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x196898) {
            ctx->pc = 0x196960u;
            goto label_196960;
        }
    }
    ctx->pc = 0x1968A0u;
    // 0x1968a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1968a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1968a4: 0x10670014  beq         $v1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1968A4u;
    {
        const bool branch_taken_0x1968a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1968a4) {
            ctx->pc = 0x1968F8u;
            goto label_1968f8;
        }
    }
    ctx->pc = 0x1968ACu;
    // 0x1968ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1968ACu;
    {
        const bool branch_taken_0x1968ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1968ac) {
            ctx->pc = 0x1968BCu;
            goto label_1968bc;
        }
    }
    ctx->pc = 0x1968B4u;
    // 0x1968b4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1968B4u;
    {
        const bool branch_taken_0x1968b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1968b4) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x1968BCu;
label_1968bc:
    // 0x1968bc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1968bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1968c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1968c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1968c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1968c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1968c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1968cc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1968ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1968d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1968d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1968d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1968d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1968d8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1968dc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1968DCu;
    SET_GPR_U32(ctx, 31, 0x1968E4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1968DCu, 0x1968E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968E4u;
label_1968e4:
    // 0x1968e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1968e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1968e8: 0x8422d340  lh          $v0, -0x2CC0($at)
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x5CD340u));
    // 0x1968ec: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1968ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1968f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1968f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1968f4: 0xa424d340  sh          $a0, -0x2CC0($at)
    ctx->pc = 0x1968f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
label_1968f8:
    // 0x1968f8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1968fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1968fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x196900: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x196900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196904: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196908: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196908u;
    SET_GPR_U32(ctx, 31, 0x196910u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196908u, 0x196910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196910u;
label_196910:
    // 0x196910: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x196910u;
    {
        const bool branch_taken_0x196910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196910) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x196918u;
    // 0x196918: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x196918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
    // 0x19691c: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x19691cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x196920: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x196920u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196928: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x196928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19692c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19692cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196930: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x196930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196934: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x196934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196938: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19693c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19693Cu;
    SET_GPR_U32(ctx, 31, 0x196944u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19693Cu, 0x196944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196944u;
label_196944:
    // 0x196944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196948: 0x8427d340  lh          $a3, -0x2CC0($at)
    ctx->pc = 0x196948u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x5CD340u));
    // 0x19694c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x19694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196950: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196954: 0xa425d340  sh          $a1, -0x2CC0($at)
    ctx->pc = 0x196954u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    // 0x196958: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x196958u;
    {
        const bool branch_taken_0x196958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196958) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x196960u;
label_196960:
    // 0x196960: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196964: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196968: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x196968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19696c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x19696Cu;
    SET_GPR_U32(ctx, 31, 0x196974u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x19696Cu, 0x196974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196974u;
label_196974:
    // 0x196974: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x196974u;
    {
        const bool branch_taken_0x196974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196974) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x19697Cu;
    // 0x19697c: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x196980: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x196980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x196984: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x196984u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196988: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19698c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19698cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196990: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x196990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196994: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196998: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19699c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1969a0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1969a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1969a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1969A4u;
    SET_GPR_U32(ctx, 31, 0x1969ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1969A4u, 0x1969ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969ACu;
label_1969ac:
    // 0x1969ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1969acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1969b0: 0x8426d340  lh          $a2, -0x2CC0($at)
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x5CD340u));
    // 0x1969b4: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1969b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1969b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1969b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1969bc: 0xa427d340  sh          $a3, -0x2CC0($at)
    ctx->pc = 0x1969bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    // 0x1969c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1969C0u;
    {
        const bool branch_taken_0x1969c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969c0) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x1969C8u;
label_1969c8:
    // 0x1969c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1969c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1969cc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1969ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1969d0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1969D0u;
    SET_GPR_U32(ctx, 31, 0x1969D8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1969D0u, 0x1969D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969D8u;
label_1969d8:
    // 0x1969d8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1969D8u;
    {
        const bool branch_taken_0x1969d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969d8) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x1969E0u;
    // 0x1969e0: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x1969e4: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x1969e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1969e8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1969e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1969ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1969ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1969f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1969f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1969f4: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1969f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1969f8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1969f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1969fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1969fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a00: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x196a00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196a04: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196a08: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196A08u;
    SET_GPR_U32(ctx, 31, 0x196A10u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196A08u, 0x196A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A10u;
label_196a10:
    // 0x196a10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196a14: 0x8425d340  lh          $a1, -0x2CC0($at)
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x5CD340u));
    // 0x196a18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x196a1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196a20: 0xa425d340  sh          $a1, -0x2CC0($at)
    ctx->pc = 0x196a20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    // 0x196a24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x196A24u;
    {
        const bool branch_taken_0x196a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a24) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x196A2Cu;
label_196a2c:
    // 0x196a2c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a30: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x196a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196a34: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x196a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196a38: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196a3c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196A3Cu;
    SET_GPR_U32(ctx, 31, 0x196A44u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196A3Cu, 0x196A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A44u;
label_196a44:
    // 0x196a44: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x196A44u;
    {
        const bool branch_taken_0x196a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a44) {
            ctx->pc = 0x196A80u;
            goto label_196a80;
        }
    }
    ctx->pc = 0x196A4Cu;
    // 0x196a4c: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x196a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x196a50: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x196a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x196a54: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x196a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196a58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a5c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x196a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196a60: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196a60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196a64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a68: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196a6c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196A6Cu;
    SET_GPR_U32(ctx, 31, 0x196A74u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196A6Cu, 0x196A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A74u;
label_196a74:
    // 0x196a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196a7c: 0xa425d340  sh          $a1, -0x2CC0($at)
    ctx->pc = 0x196a7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
label_196a80:
    // 0x196a80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x196a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a84: 0x8c64008c  lw          $a0, 0x8C($v1)
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x196a88: 0x108003fb  beqz        $a0, . + 4 + (0x3FB << 2)
    ctx->pc = 0x196A88u;
    {
        const bool branch_taken_0x196a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a88) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x196A90u;
    // 0x196a90: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a94: 0x84a60096  lh          $a2, 0x96($a1)
    ctx->pc = 0x196a94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x196a98: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x196a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x196a9c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x196a9cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x196aa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x196aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196aa4: 0x10e50338  beq         $a3, $a1, . + 4 + (0x338 << 2)
    ctx->pc = 0x196AA4u;
    {
        const bool branch_taken_0x196aa4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x196aa4) {
            ctx->pc = 0x197788u;
            goto label_197788;
        }
    }
    ctx->pc = 0x196AACu;
    // 0x196aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ab0: 0x10e300de  beq         $a3, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x196AB0u;
    {
        const bool branch_taken_0x196ab0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x196ab0) {
            ctx->pc = 0x196E2Cu;
            goto label_196e2c;
        }
    }
    ctx->pc = 0x196AB8u;
    // 0x196ab8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x196AB8u;
    {
        const bool branch_taken_0x196ab8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ab8) {
            ctx->pc = 0x196AC8u;
            goto label_196ac8;
        }
    }
    ctx->pc = 0x196AC0u;
    // 0x196ac0: 0x100003ed  b           . + 4 + (0x3ED << 2)
    ctx->pc = 0x196AC0u;
    {
        const bool branch_taken_0x196ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ac0) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x196AC8u;
label_196ac8:
    // 0x196ac8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x196ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196acc: 0x94640094  lhu         $a0, 0x94($v1)
    ctx->pc = 0x196accu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x196ad0: 0x14800059  bnez        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x196AD0u;
    {
        const bool branch_taken_0x196ad0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x196ad0) {
            ctx->pc = 0x196C38u;
            goto label_196c38;
        }
    }
    ctx->pc = 0x196AD8u;
    // 0x196ad8: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x196ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x196adc: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x196adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x196ae0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x196ae0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196ae4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ae8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196ae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196aec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196af0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196af0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196af4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196af8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196afc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196AFCu;
    SET_GPR_U32(ctx, 31, 0x196B04u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196AFCu, 0x196B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B04u;
label_196b04:
    // 0x196b04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x196b04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196b08: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x196b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x196b0c: 0x34c3d70a  ori         $v1, $a2, 0xD70A
    ctx->pc = 0x196b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x196b10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x196b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b14: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b18: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196b18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196b1c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196b20: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b24: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196b28: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b2c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196B2Cu;
    SET_GPR_U32(ctx, 31, 0x196B34u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196B2Cu, 0x196B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B34u;
label_196b34:
    // 0x196b34: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196b38: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196b38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196b3c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196b3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b44: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196b48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b4c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196b50: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b54: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196B54u;
    SET_GPR_U32(ctx, 31, 0x196B5Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196B54u, 0x196B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B5Cu;
label_196b5c:
    // 0x196b5c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196b60: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196b60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196b64: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196b64u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b6c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x196b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196b70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196b78: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b7c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196B7Cu;
    SET_GPR_U32(ctx, 31, 0x196B84u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196B7Cu, 0x196B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B84u;
label_196b84:
    // 0x196b84: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x196b88: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x196b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x196b8c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196b8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b94: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x196b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x196b98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b9c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196ba0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196ba4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196BA4u;
    SET_GPR_U32(ctx, 31, 0x196BACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196BA4u, 0x196BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BACu;
label_196bac:
    // 0x196bac: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196bb0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196bb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196bb4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196bb4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196bb8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196bbc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x196bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x196bc0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x196bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196bc4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196bc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196bc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196bcc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196bd0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196bd4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196BD4u;
    SET_GPR_U32(ctx, 31, 0x196BDCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196BD4u, 0x196BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BDCu;
label_196bdc:
    // 0x196bdc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196be0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196be4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196be4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196be8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196bec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196bf0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196bf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196bf4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196bf8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196bfc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196BFCu;
    SET_GPR_U32(ctx, 31, 0x196C04u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196BFCu, 0x196C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C04u;
label_196c04:
    // 0x196c04: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196c08: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196c08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196c0c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196c0cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196c10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c14: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x196c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196c18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196c18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196c1c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196c20: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196c24: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196C24u;
    SET_GPR_U32(ctx, 31, 0x196C2Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196C24u, 0x196C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C2Cu;
label_196c2c:
    // 0x196c2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196c30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c34: 0xa4470094  sh          $a3, 0x94($v0)
    ctx->pc = 0x196c34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 7));
label_196c38:
    // 0x196c38: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c3c: 0x24a21348  addiu       $v0, $a1, 0x1348
    ctx->pc = 0x196c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4936));
    // 0x196c40: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196c44: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196c48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196c48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196c4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196c54: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c58: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196c5c: 0x8ce30830  lw          $v1, 0x830($a3)
    ctx->pc = 0x196c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x196c60: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x196c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x196c64: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c68: 0x24e31348  addiu       $v1, $a3, 0x1348
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4936));
    // 0x196c6c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196c70: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196c74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196c74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196c78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x196c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196c80: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c84: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196c88: 0x8ce208c0  lw          $v0, 0x8C0($a3)
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2240)));
    // 0x196c8c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196c90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c94: 0x24851348  addiu       $a1, $a0, 0x1348
    ctx->pc = 0x196c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x196c98: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x196c98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x196c9c: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x196c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x196ca0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x196ca0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196ca4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x196ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196ca8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196cac: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cb0: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196cb4: 0x8ce20950  lw          $v0, 0x950($a3)
    ctx->pc = 0x196cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2384)));
    // 0x196cb8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196cbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cc0: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x196cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196cc4: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196cc8: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196ccc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196cccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196cd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196cd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196cd8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cdc: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196ce0: 0x8ce20a70  lw          $v0, 0xA70($a3)
    ctx->pc = 0x196ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2672)));
    // 0x196ce4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196ce8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cec: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x196cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196cf0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196cf4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196cf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196cf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196cfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d04: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d08: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196d0c: 0x8ce20b00  lw          $v0, 0xB00($a3)
    ctx->pc = 0x196d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2816)));
    // 0x196d10: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d18: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196d1c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196d20: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196d24: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196d24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196d28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d30: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d34: 0x8ce70058  lw          $a3, 0x58($a3)
    ctx->pc = 0x196d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x196d38: 0x8ce20b90  lw          $v0, 0xB90($a3)
    ctx->pc = 0x196d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2960)));
    // 0x196d3c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d44: 0x24441348  addiu       $a0, $v0, 0x1348
    ctx->pc = 0x196d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196d48: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x196d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x196d4c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x196d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x196d50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x196d50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196d54: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x196d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d5c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d60: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196d64: 0x8ce20c20  lw          $v0, 0xC20($a3)
    ctx->pc = 0x196d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3104)));
    // 0x196d68: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d70: 0x24821348  addiu       $v0, $a0, 0x1348
    ctx->pc = 0x196d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x196d74: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196d78: 0x34a6d70a  ori         $a2, $a1, 0xD70A
    ctx->pc = 0x196d78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196d7c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x196d7cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196d80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d88: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d8c: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196d90: 0x8ce20f80  lw          $v0, 0xF80($a3)
    ctx->pc = 0x196d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3968)));
    // 0x196d94: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d9c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x196d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196da0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DA0u;
    SET_GPR_U32(ctx, 31, 0x196DA8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DA0u, 0x196DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DA8u;
label_196da8:
    // 0x196da8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196dac: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x196dacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x196db0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x196db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196db4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196db4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196db8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DB8u;
    SET_GPR_U32(ctx, 31, 0x196DC0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DB8u, 0x196DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DC0u;
label_196dc0:
    // 0x196dc0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196dc4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196dc8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DC8u;
    SET_GPR_U32(ctx, 31, 0x196DD0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DC8u, 0x196DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DD0u;
label_196dd0:
    // 0x196dd0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196dd4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x196dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196dd8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DD8u;
    SET_GPR_U32(ctx, 31, 0x196DE0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DD8u, 0x196DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DE0u;
label_196de0:
    // 0x196de0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196de4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x196de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x196de8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DE8u;
    SET_GPR_U32(ctx, 31, 0x196DF0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DE8u, 0x196DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DF0u;
label_196df0:
    // 0x196df0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196df4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196df8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DF8u;
    SET_GPR_U32(ctx, 31, 0x196E00u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DF8u, 0x196E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E00u;
label_196e00:
    // 0x196e00: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e04: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196e08: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x196e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196e0c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196E0Cu;
    SET_GPR_U32(ctx, 31, 0x196E14u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196E0Cu, 0x196E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E14u;
label_196e14:
    // 0x196e14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e18: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x196e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196e1c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196E1Cu;
    SET_GPR_U32(ctx, 31, 0x196E24u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196E1Cu, 0x196E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E24u;
label_196e24:
    // 0x196e24: 0x10000314  b           . + 4 + (0x314 << 2)
    ctx->pc = 0x196E24u;
    {
        const bool branch_taken_0x196e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e24) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x196E2Cu;
label_196e2c:
    // 0x196e2c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e30: 0x94c70094  lhu         $a3, 0x94($a2)
    ctx->pc = 0x196e30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x196e34: 0x14e00069  bnez        $a3, . + 4 + (0x69 << 2)
    ctx->pc = 0x196E34u;
    {
        const bool branch_taken_0x196e34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x196e34) {
            ctx->pc = 0x196FDCu;
            goto label_196fdc;
        }
    }
    ctx->pc = 0x196E3Cu;
    // 0x196e3c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196e40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x196e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196e48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e4c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x196e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196e50: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196e50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196e58: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196e58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e5c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196E5Cu;
    SET_GPR_U32(ctx, 31, 0x196E64u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196E5Cu, 0x196E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E64u;
label_196e64:
    // 0x196e64: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196e68: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196e68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196e6c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196e6cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196e78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196e78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196e80: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196e80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e84: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196E84u;
    SET_GPR_U32(ctx, 31, 0x196E8Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196E84u, 0x196E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E8Cu;
label_196e8c:
    // 0x196e8c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x196e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x196e90: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x196e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x196e94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x196e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196e98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e9c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196ea0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196ea0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196ea4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ea8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196ea8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196eac: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196EACu;
    SET_GPR_U32(ctx, 31, 0x196EB4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196EACu, 0x196EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EB4u;
label_196eb4:
    // 0x196eb4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x196eb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196eb8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196ebc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x196ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196ec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196ec4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ec8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x196ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196ecc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196eccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196ed0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ed4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196ed4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196ed8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196ED8u;
    SET_GPR_U32(ctx, 31, 0x196EE0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196ED8u, 0x196EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EE0u;
label_196ee0:
    // 0x196ee0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x196ee0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196ee4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196ee8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x196ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196eec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196ef0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ef4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x196ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x196ef8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196ef8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f00: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f00u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f04: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F04u;
    SET_GPR_U32(ctx, 31, 0x196F0Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F04u, 0x196F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F0Cu;
label_196f0c:
    // 0x196f0c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x196f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x196f10: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x196f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x196f14: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x196f14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196f1c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196f20: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196f20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f28: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f2c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F2Cu;
    SET_GPR_U32(ctx, 31, 0x196F34u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F2Cu, 0x196F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F34u;
label_196f34:
    // 0x196f34: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x196f34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196f38: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196f3c: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x196f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196f40: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x196f40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196f44: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196f48: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196f4c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x196f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196f50: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196f50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f58: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f5c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F5Cu;
    SET_GPR_U32(ctx, 31, 0x196F64u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F5Cu, 0x196F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F64u;
label_196f64:
    // 0x196f64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x196f64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196f68: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196f6c: 0x34a2d70a  ori         $v0, $a1, 0xD70A
    ctx->pc = 0x196f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196f70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196f74: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196f78: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x196f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196f7c: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x196f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196f80: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196f80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196f84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196f84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f90: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F90u;
    SET_GPR_U32(ctx, 31, 0x196F98u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F90u, 0x196F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F98u;
label_196f98:
    // 0x196f98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x196f98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196f9c: 0x3c083c23  lui         $t0, 0x3C23
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15395 << 16));
    // 0x196fa0: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x196fa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x196fa4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196fa4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196fa8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196fac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x196facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196fb0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x196fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x196fb4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196fb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196fbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196fc0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196fc0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196fc4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196FC4u;
    SET_GPR_U32(ctx, 31, 0x196FCCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196FC4u, 0x196FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FCCu;
label_196fcc:
    // 0x196fcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x196fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196fd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196fd8: 0xa4450094  sh          $a1, 0x94($v0)
    ctx->pc = 0x196fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 5));
label_196fdc:
    // 0x196fdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196fe0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x196fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x196fe4: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196FE4u;
    SET_GPR_U32(ctx, 31, 0x196FECu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196FE4u, 0x196FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FECu;
label_196fec:
    // 0x196fec: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196fecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ff0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196ff4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x196ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196ff8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196ff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196ffc: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196FFCu;
    SET_GPR_U32(ctx, 31, 0x197004u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196FFCu, 0x197004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197004u;
label_197004:
    // 0x197004: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x197004u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197008: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19700c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x19700cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197010: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197014: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197014u;
    SET_GPR_U32(ctx, 31, 0x19701Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197014u, 0x19701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19701Cu;
label_19701c:
    // 0x19701c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19701cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197020: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197024: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x197024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x197028: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x197028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19702c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x19702cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197030: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197030u;
    SET_GPR_U32(ctx, 31, 0x197038u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197030u, 0x197038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197038u;
label_197038:
    // 0x197038: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19703c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x19703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x197040: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197040u;
    SET_GPR_U32(ctx, 31, 0x197048u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197040u, 0x197048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197048u;
label_197048:
    // 0x197048: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19704c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x19704cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197050: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197050u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197054: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x197054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197058: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x197058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19705c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x19705Cu;
    SET_GPR_U32(ctx, 31, 0x197064u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x19705Cu, 0x197064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197064u;
label_197064:
    // 0x197064: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x197064u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19706c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x19706cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197070: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x197074: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197074u;
    SET_GPR_U32(ctx, 31, 0x19707Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197074u, 0x19707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19707Cu;
label_19707c:
    // 0x19707c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x19707cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197080: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197084: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x197084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197088: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197088u;
    SET_GPR_U32(ctx, 31, 0x197090u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197088u, 0x197090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197090u;
label_197090:
    // 0x197090: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197090u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197094: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197098: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19709c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x19709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1970a0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1970A0u;
    SET_GPR_U32(ctx, 31, 0x1970A8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1970A0u, 0x1970A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970A8u;
label_1970a8:
    // 0x1970a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1970a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1970ac: 0x10600272  beqz        $v1, . + 4 + (0x272 << 2)
    ctx->pc = 0x1970ACu;
    {
        const bool branch_taken_0x1970ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970ac) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x1970B4u;
    // 0x1970b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1970b8: 0x94640094  lhu         $a0, 0x94($v1)
    ctx->pc = 0x1970b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1970bc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1970bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1970c0: 0xa4650094  sh          $a1, 0x94($v1)
    ctx->pc = 0x1970c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 5));
    // 0x1970c4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1970c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1970c8: 0x94c70094  lhu         $a3, 0x94($a2)
    ctx->pc = 0x1970c8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x1970cc: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x1970ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1970d0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1970d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1970d4: 0x10a701a6  beq         $a1, $a3, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x1970D4u;
    {
        const bool branch_taken_0x1970d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x1970d4) {
            ctx->pc = 0x197770u;
            goto label_197770;
        }
    }
    ctx->pc = 0x1970DCu;
    // 0x1970dc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1970dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1970e0: 0x10a80143  beq         $a1, $t0, . + 4 + (0x143 << 2)
    ctx->pc = 0x1970E0u;
    {
        const bool branch_taken_0x1970e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x1970e0) {
            ctx->pc = 0x1975F0u;
            goto label_1975f0;
        }
    }
    ctx->pc = 0x1970E8u;
    // 0x1970e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1970e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1970ec: 0x10a400cd  beq         $a1, $a0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1970ECu;
    {
        const bool branch_taken_0x1970ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1970ec) {
            ctx->pc = 0x197424u;
            goto label_197424;
        }
    }
    ctx->pc = 0x1970F4u;
    // 0x1970f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1970f8: 0x10a3006f  beq         $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1970F8u;
    {
        const bool branch_taken_0x1970f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1970f8) {
            ctx->pc = 0x1972B8u;
            goto label_1972b8;
        }
    }
    ctx->pc = 0x197100u;
    // 0x197100: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197104: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x197104u;
    {
        const bool branch_taken_0x197104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x197104) {
            ctx->pc = 0x197114u;
            goto label_197114;
        }
    }
    ctx->pc = 0x19710Cu;
    // 0x19710c: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x19710Cu;
    {
        const bool branch_taken_0x19710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19710c) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197114u;
label_197114:
    // 0x197114: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x197114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197118: 0x34a7d70a  ori         $a3, $a1, 0xD70A
    ctx->pc = 0x197118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x19711c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x19711cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197120: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197124: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197124u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197128: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x197128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19712c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x19712cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197134: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197134u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197138: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19713c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19713cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197140: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197140u;
    SET_GPR_U32(ctx, 31, 0x197148u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197140u, 0x197148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197148u;
label_197148:
    // 0x197148: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x19714c: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x19714cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197150: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197150u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197154: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197158: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19715c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x19715cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197160: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197160u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197168: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197168u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19716c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19716cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197170: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197170u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197174: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197174u;
    SET_GPR_U32(ctx, 31, 0x19717Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197174u, 0x19717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19717Cu;
label_19717c:
    // 0x19717c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x19717cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197180: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197184: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197188: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19718c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19718cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197190: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197194: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19719c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19719cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1971a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1971a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1971a4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1971a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1971a8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1971A8u;
    SET_GPR_U32(ctx, 31, 0x1971B0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1971A8u, 0x1971B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971B0u;
label_1971b0:
    // 0x1971b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1971b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1971b4: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1971b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1971b8: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1971b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1971bc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1971bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1971c0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1971c4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1971c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1971c8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1971cc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1971ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1971d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1971d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1971d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1971d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1971d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1971d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1971dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1971dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1971e0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1971E0u;
    SET_GPR_U32(ctx, 31, 0x1971E8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1971E0u, 0x1971E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971E8u;
label_1971e8:
    // 0x1971e8: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x1971e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x1971ec: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x1971ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x1971f0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1971f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1971f4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1971f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1971f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1971fc: 0x24080013  addiu       $t0, $zero, 0x13
    ctx->pc = 0x1971fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197200: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197208: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19720c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197210: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197210u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197214: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197214u;
    SET_GPR_U32(ctx, 31, 0x19721Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197214u, 0x19721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19721Cu;
label_19721c:
    // 0x19721c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197220: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197224: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197224u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197228: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19722c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19722cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197230: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x197230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x197234: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19723c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19723cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197240: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197244: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197244u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197248: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197248u;
    SET_GPR_U32(ctx, 31, 0x197250u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197248u, 0x197250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197250u;
label_197250:
    // 0x197250: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197254: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197258: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19725c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x19725cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197260: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197264: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x197264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197268: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197268u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x19726c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197270: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197270u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197274: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197278: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197278u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19727c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19727Cu;
    SET_GPR_U32(ctx, 31, 0x197284u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19727Cu, 0x197284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197284u;
label_197284:
    // 0x197284: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197288: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19728c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19728cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197290: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197294: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x197294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19729c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1972a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1972a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1972a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1972A4u;
    SET_GPR_U32(ctx, 31, 0x1972ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1972A4u, 0x1972ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972ACu;
label_1972ac:
    // 0x1972ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1972acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1972b0: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x1972B0u;
    {
        const bool branch_taken_0x1972b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1972b0) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x1972B8u;
label_1972b8:
    // 0x1972b8: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1972b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x1972bc: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x1972bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1972c0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1972c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1972c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1972c8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1972c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1972cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1972ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1972d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1972d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1972d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1972d8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1972D8u;
    SET_GPR_U32(ctx, 31, 0x1972E0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1972D8u, 0x1972E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972E0u;
label_1972e0:
    // 0x1972e0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1972e4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1972e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1972e8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1972e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1972ec: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1972ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1972f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1972f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1972f4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1972f8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1972f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1972fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1972fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197300: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197304: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197304u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197308: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197308u;
    SET_GPR_U32(ctx, 31, 0x197310u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197308u, 0x197310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197310u;
label_197310:
    // 0x197310: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197314: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197318: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19731c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19731cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197320: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197324: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197328: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19732c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19732cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197330: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197330u;
    SET_GPR_U32(ctx, 31, 0x197338u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197330u, 0x197338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197338u;
label_197338:
    // 0x197338: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x19733c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197344: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197348: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19734c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197350: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197354: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197354u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197358: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197358u;
    SET_GPR_U32(ctx, 31, 0x197360u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197358u, 0x197360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197360u;
label_197360:
    // 0x197360: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197364: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197368: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19736c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197370: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x197370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197374: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197378: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x197378u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19737c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19737cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197380: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197380u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197384: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197384u;
    SET_GPR_U32(ctx, 31, 0x19738Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197384u, 0x19738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19738Cu;
label_19738c:
    // 0x19738c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x197390: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x197390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x197394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197398: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19739c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x19739cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1973a0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1973a4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1973a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1973a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1973a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1973ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1973acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1973b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1973b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1973b4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1973B4u;
    SET_GPR_U32(ctx, 31, 0x1973BCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1973B4u, 0x1973BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973BCu;
label_1973bc:
    // 0x1973bc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1973bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1973c0: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x1973c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1973c4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1973c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1973c8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1973cc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1973ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1973d0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1973d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1973d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1973dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1973dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1973e0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1973E0u;
    SET_GPR_U32(ctx, 31, 0x1973E8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1973E0u, 0x1973E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973E8u;
label_1973e8:
    // 0x1973e8: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1973e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1973ec: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1973ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1973f0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1973f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1973f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1973f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1973f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1973f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1973fc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1973fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197400: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197404: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197408: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x197408u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19740c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19740cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197410: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197410u;
    SET_GPR_U32(ctx, 31, 0x197418u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197410u, 0x197418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197418u;
label_197418:
    // 0x197418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19741c: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x19741Cu;
    {
        const bool branch_taken_0x19741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19741c) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197424u;
label_197424:
    // 0x197424: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x197424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x197428: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19742c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19742cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197430: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197434: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x197434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x197438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19743c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19743cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197440: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x197440u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197444: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197444u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197448: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197448u;
    SET_GPR_U32(ctx, 31, 0x197450u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197448u, 0x197450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197450u;
label_197450:
    // 0x197450: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197454: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197458: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19745c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19745cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197460: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197464: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x197464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197468: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19746c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19746cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197470: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197474: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197474u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197478: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197478u;
    SET_GPR_U32(ctx, 31, 0x197480u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197478u, 0x197480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197480u;
label_197480:
    // 0x197480: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197484: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x197484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x197488: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x197488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x19748c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19748cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197490: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197494: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197498: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x197498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19749c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19749cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1974a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1974a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1974a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1974a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1974a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1974ac: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1974ACu;
    SET_GPR_U32(ctx, 31, 0x1974B4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1974ACu, 0x1974B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974B4u;
label_1974b4:
    // 0x1974b4: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x1974b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x1974b8: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x1974b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x1974bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1974bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1974c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1974c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1974c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1974c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1974c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1974cc: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1974ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1974d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1974d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1974d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1974d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1974dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1974dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1974e0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1974E0u;
    SET_GPR_U32(ctx, 31, 0x1974E8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1974E0u, 0x1974E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974E8u;
label_1974e8:
    // 0x1974e8: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1974ec: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1974ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1974f0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1974f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1974f4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1974f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1974f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1974f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1974fc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1974fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x197500: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197504: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197508: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19750c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19750cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197510: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197510u;
    SET_GPR_U32(ctx, 31, 0x197518u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197510u, 0x197518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197518u;
label_197518:
    // 0x197518: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x197518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x19751c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x19751cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x197520: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197524: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197528: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x197528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19752c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19752cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197530: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x197530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197534: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197538: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197538u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19753c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19753Cu;
    SET_GPR_U32(ctx, 31, 0x197544u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19753Cu, 0x197544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197544u;
label_197544:
    // 0x197544: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x197544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x197548: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x197548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x19754c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19754cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197550: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197554: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197558: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x197558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19755c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x19755cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197560: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197564: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x197564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19756c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x19756cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197570: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197570u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197574: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197574u;
    SET_GPR_U32(ctx, 31, 0x19757Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197574u, 0x19757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19757Cu;
label_19757c:
    // 0x19757c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x19757cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197580: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197584: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197584u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197588: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19758c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19758cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197590: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197594: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197598: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x197598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19759c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19759cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1975a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1975a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1975a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1975A4u;
    SET_GPR_U32(ctx, 31, 0x1975ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1975A4u, 0x1975ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975ACu;
label_1975ac:
    // 0x1975ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1975acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1975b0: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x1975b4: 0x34e5d70a  ori         $a1, $a3, 0xD70A
    ctx->pc = 0x1975b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x1975b8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1975b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1975bc: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1975bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1975c0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1975c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1975c4: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x1975c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1975c8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1975c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1975cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1975d0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1975d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1975d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1975d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1975d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1975d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1975dc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1975DCu;
    SET_GPR_U32(ctx, 31, 0x1975E4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1975DCu, 0x1975E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975E4u;
label_1975e4:
    // 0x1975e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1975e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1975e8: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1975E8u;
    {
        const bool branch_taken_0x1975e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1975e8) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x1975F0u;
label_1975f0:
    // 0x1975f0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1975f4: 0x34a7d70a  ori         $a3, $a1, 0xD70A
    ctx->pc = 0x1975f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1975f8: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1975f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1975fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1975fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197600: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197604: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x197604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197608: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19760c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19760cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197610: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197610u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197614: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197614u;
    SET_GPR_U32(ctx, 31, 0x19761Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197614u, 0x19761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19761Cu;
label_19761c:
    // 0x19761c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x19761cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197620: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x197624: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x197624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x197628: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x197628u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19762c: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197630: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x197630u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197634: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x197634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197638: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197638u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19763c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197640: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197644: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197644u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197648: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197648u;
    SET_GPR_U32(ctx, 31, 0x197650u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197648u, 0x197650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197650u;
label_197650:
    // 0x197650: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197654: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197658: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19765c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19765cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197660: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197664: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x197664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19766c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19766cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197674: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197674u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197678: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197678u;
    SET_GPR_U32(ctx, 31, 0x197680u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197678u, 0x197680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197680u;
label_197680:
    // 0x197680: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197680u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197684: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197688: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x197688u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19768c: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x19768cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197690: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197694: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197698: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x197698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19769c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19769cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1976a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1976a4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1976a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1976a8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1976A8u;
    SET_GPR_U32(ctx, 31, 0x1976B0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1976A8u, 0x1976B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976B0u;
label_1976b0:
    // 0x1976b0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1976b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1976b4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1976b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1976b8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1976b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1976bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1976bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1976c0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1976c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1976c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1976c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976c8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1976c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1976cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1976ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1976d0: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1976d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1976d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1976d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1976d8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1976D8u;
    SET_GPR_U32(ctx, 31, 0x1976E0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1976D8u, 0x1976E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976E0u;
label_1976e0:
    // 0x1976e0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1976e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x1976e4: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x1976e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1976e8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1976e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1976ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1976ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1976f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1976f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1976f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1976f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1976f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1976fc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1976fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197700: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197700u;
    SET_GPR_U32(ctx, 31, 0x197708u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197700u, 0x197708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197708u;
label_197708:
    // 0x197708: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19770c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x197710: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x197710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x197714: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197718: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19771c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197720: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197724: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197728: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197728u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19772c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19772Cu;
    SET_GPR_U32(ctx, 31, 0x197734u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19772Cu, 0x197734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197734u;
label_197734:
    // 0x197734: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197738: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x197738u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x19773c: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x19773cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x197740: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x197740u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197744: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197748: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x19774c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x19774cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x197750: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197754: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197758: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197758u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19775c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19775Cu;
    SET_GPR_U32(ctx, 31, 0x197764u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19775Cu, 0x197764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197764u;
label_197764:
    // 0x197764: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197768: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x197768u;
    {
        const bool branch_taken_0x197768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197768) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197770u;
label_197770:
    // 0x197770: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197774: 0xa4e00096  sh          $zero, 0x96($a3)
    ctx->pc = 0x197774u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x197778: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x197778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19777c: 0xa5000094  sh          $zero, 0x94($t0)
    ctx->pc = 0x19777cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x197780: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x197780u;
    {
        const bool branch_taken_0x197780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197780) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197788u;
label_197788:
    // 0x197788: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19778c: 0x94470094  lhu         $a3, 0x94($v0)
    ctx->pc = 0x19778cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x197790: 0x14e0001d  bnez        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x197790u;
    {
        const bool branch_taken_0x197790 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x197790) {
            ctx->pc = 0x197808u;
            goto label_197808;
        }
    }
    ctx->pc = 0x197798u;
    // 0x197798: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x197798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x19779c: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x19779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x1977a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1977a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1977a4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1977a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1977a8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1977a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1977ac: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1977acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1977b0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1977b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1977b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1977b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1977b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1977bc: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1977bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1977c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1977c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977c4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1977C4u;
    SET_GPR_U32(ctx, 31, 0x1977CCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1977C4u, 0x1977CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977CCu;
label_1977cc:
    // 0x1977cc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1977ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1977d0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x1977d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1977d4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1977d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1977d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1977dc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1977dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1977e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1977e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1977e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1977e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977ec: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1977ECu;
    SET_GPR_U32(ctx, 31, 0x1977F4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1977ECu, 0x1977F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977F4u;
label_1977f4:
    // 0x1977f4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1977f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1977f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1977fc: 0x94470094  lhu         $a3, 0x94($v0)
    ctx->pc = 0x1977fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x197800: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197804: 0xa4430094  sh          $v1, 0x94($v0)
    ctx->pc = 0x197804u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 3));
label_197808:
    // 0x197808: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19780c: 0x94850094  lhu         $a1, 0x94($a0)
    ctx->pc = 0x19780cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x197810: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x197810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x197814: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197818: 0x14e80023  bne         $a3, $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x197818u;
    {
        const bool branch_taken_0x197818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x197818) {
            ctx->pc = 0x1978A8u;
            goto label_1978a8;
        }
    }
    ctx->pc = 0x197820u;
    // 0x197820: 0x3c073e19  lui         $a3, 0x3E19
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15897 << 16));
    // 0x197824: 0x34e2999a  ori         $v0, $a3, 0x999A
    ctx->pc = 0x197824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x197828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19782c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197830: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197834: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19783c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197840: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197840u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197844: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197844u;
    SET_GPR_U32(ctx, 31, 0x19784Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197844u, 0x19784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19784Cu;
label_19784c:
    // 0x19784c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x19784cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197850: 0x3c073f59  lui         $a3, 0x3F59
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16217 << 16));
    // 0x197854: 0x34e2999a  ori         $v0, $a3, 0x999A
    ctx->pc = 0x197854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x197858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19785c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197860: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x197860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197864: 0x8c8508c0  lw          $a1, 0x8C0($a0)
    ctx->pc = 0x197864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    // 0x197868: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x197868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x19786c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x197870: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x197870u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197874: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x197874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197878: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x197878u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x19787c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x19787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197880: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197884: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197884u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19788c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19788cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197890: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x197890u;
    SET_GPR_U32(ctx, 31, 0x197898u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x197890u, 0x197898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197898u;
label_197898:
    // 0x197898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19789c: 0x94850094  lhu         $a1, 0x94($a0)
    ctx->pc = 0x19789cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1978a0: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1978a4: 0xa4870094  sh          $a3, 0x94($a0)
    ctx->pc = 0x1978a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 7));
label_1978a8:
    // 0x1978a8: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978ac: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1978acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1978b0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1978b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1978b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1978b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1978b8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1978B8u;
    SET_GPR_U32(ctx, 31, 0x1978C0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1978B8u, 0x1978C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978C0u;
label_1978c0:
    // 0x1978c0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1978c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1978c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1978c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1978c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1978cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1978ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1978d0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1978D0u;
    SET_GPR_U32(ctx, 31, 0x1978D8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1978D0u, 0x1978D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978D8u;
label_1978d8:
    // 0x1978d8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1978D8u;
    {
        const bool branch_taken_0x1978d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1978d8) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x1978E0u;
    // 0x1978e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978e4: 0x94850094  lhu         $a1, 0x94($a0)
    ctx->pc = 0x1978e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1978e8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1978e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1978ec: 0xa4860094  sh          $a2, 0x94($a0)
    ctx->pc = 0x1978ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 6));
    // 0x1978f0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1978f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978f4: 0x94e30094  lhu         $v1, 0x94($a3)
    ctx->pc = 0x1978f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x1978f8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1978f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1978fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1978fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x197900: 0x10e3005d  beq         $a3, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x197900u;
    {
        const bool branch_taken_0x197900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x197900) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197908u;
    // 0x197908: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x197908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19790c: 0x10e40043  beq         $a3, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x19790Cu;
    {
        const bool branch_taken_0x19790c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x19790c) {
            ctx->pc = 0x197A1Cu;
            goto label_197a1c;
        }
    }
    ctx->pc = 0x197914u;
    // 0x197914: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x197914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197918: 0x10e50026  beq         $a3, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x197918u;
    {
        const bool branch_taken_0x197918 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x197918) {
            ctx->pc = 0x1979B4u;
            goto label_1979b4;
        }
    }
    ctx->pc = 0x197920u;
    // 0x197920: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197924: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x197924u;
    {
        const bool branch_taken_0x197924 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x197924) {
            ctx->pc = 0x197934u;
            goto label_197934;
        }
    }
    ctx->pc = 0x19792Cu;
    // 0x19792c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x19792Cu;
    {
        const bool branch_taken_0x19792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19792c) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197934u;
label_197934:
    // 0x197934: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x197938: 0x34479ba6  ori         $a3, $v0, 0x9BA6
    ctx->pc = 0x197938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x19793c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x19793cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197940: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197944: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197948: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19794c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19794cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197950: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197950u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197954: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197954u;
    SET_GPR_U32(ctx, 31, 0x19795Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197954u, 0x19795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19795Cu;
label_19795c:
    // 0x19795c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19795cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197960: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x197964: 0x3447999a  ori         $a3, $v0, 0x999A
    ctx->pc = 0x197964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x197968: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x197968u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19796c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197970: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x197970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197974: 0x8c4408c0  lw          $a0, 0x8C0($v0)
    ctx->pc = 0x197974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2240)));
    // 0x197978: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x197978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x19797c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x19797cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x197980: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x197980u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197984: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x197984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197988: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x197988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x19798c: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197990: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x197990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197994: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19799c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x19799cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1979a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1979a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1979a4: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x1979A4u;
    SET_GPR_U32(ctx, 31, 0x1979ACu);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x1979A4u, 0x1979ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979ACu;
label_1979ac:
    // 0x1979ac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1979ACu;
    {
        const bool branch_taken_0x1979ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979ac) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x1979B4u;
label_1979b4:
    // 0x1979b4: 0x3c043e19  lui         $a0, 0x3E19
    ctx->pc = 0x1979b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15897 << 16));
    // 0x1979b8: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1979b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1979bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1979bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1979c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1979c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1979c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1979c8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1979c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1979cc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1979ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1979d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1979d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1979d4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1979d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1979d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1979d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1979dc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1979dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1979e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1979e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1979e4: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x1979E4u;
    SET_GPR_U32(ctx, 31, 0x1979ECu);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x1979E4u, 0x1979ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979ECu;
label_1979ec:
    // 0x1979ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1979ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1979f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1979f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1979f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1979f8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1979f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1979fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1979fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a04: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197a04u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a08: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x197A08u;
    SET_GPR_U32(ctx, 31, 0x197A10u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x197A08u, 0x197A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A10u;
label_197a10:
    // 0x197a10: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x197a10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197a14: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x197A14u;
    {
        const bool branch_taken_0x197a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a14) {
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197A1Cu;
label_197a1c:
    // 0x197a1c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x197a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x197a20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x197a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x197a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197a28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197a2c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197a30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x197a34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197a38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a3c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197A3Cu;
    SET_GPR_U32(ctx, 31, 0x197A44u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197A3Cu, 0x197A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A44u;
label_197a44:
    // 0x197a44: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197a44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197a48: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x197a4c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x197a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x197a50: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x197a50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197a54: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197a58: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x197a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197a5c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197a5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197a60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x197a64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a68: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197a68u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a6c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197A6Cu;
    SET_GPR_U32(ctx, 31, 0x197A74u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197A6Cu, 0x197A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A74u;
label_197a74:
    // 0x197a74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197a74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_197a78:
    // 0x197a78: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x197a78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197a7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x197a80: 0x3e00008  jr          $ra
    ctx->pc = 0x197A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197A88u;
}
