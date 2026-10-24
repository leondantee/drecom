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

// Function: Rain_trans_end
// Address: 0x1ad7f0 - 0x1ada18
void Rain_trans_end_0x1ad7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_trans_end_0x1ad7f0");
#endif

    switch (ctx->pc) {
        case 0x1ad7f0u: goto label_1ad7f0;
        case 0x1ad7f4u: goto label_1ad7f4;
        case 0x1ad7f8u: goto label_1ad7f8;
        case 0x1ad7fcu: goto label_1ad7fc;
        case 0x1ad800u: goto label_1ad800;
        case 0x1ad804u: goto label_1ad804;
        case 0x1ad808u: goto label_1ad808;
        case 0x1ad80cu: goto label_1ad80c;
        case 0x1ad810u: goto label_1ad810;
        case 0x1ad814u: goto label_1ad814;
        case 0x1ad818u: goto label_1ad818;
        case 0x1ad81cu: goto label_1ad81c;
        case 0x1ad820u: goto label_1ad820;
        case 0x1ad824u: goto label_1ad824;
        case 0x1ad828u: goto label_1ad828;
        case 0x1ad82cu: goto label_1ad82c;
        case 0x1ad830u: goto label_1ad830;
        case 0x1ad834u: goto label_1ad834;
        case 0x1ad838u: goto label_1ad838;
        case 0x1ad83cu: goto label_1ad83c;
        case 0x1ad840u: goto label_1ad840;
        case 0x1ad844u: goto label_1ad844;
        case 0x1ad848u: goto label_1ad848;
        case 0x1ad84cu: goto label_1ad84c;
        case 0x1ad850u: goto label_1ad850;
        case 0x1ad854u: goto label_1ad854;
        case 0x1ad858u: goto label_1ad858;
        case 0x1ad85cu: goto label_1ad85c;
        case 0x1ad860u: goto label_1ad860;
        case 0x1ad864u: goto label_1ad864;
        case 0x1ad868u: goto label_1ad868;
        case 0x1ad86cu: goto label_1ad86c;
        case 0x1ad870u: goto label_1ad870;
        case 0x1ad874u: goto label_1ad874;
        case 0x1ad878u: goto label_1ad878;
        case 0x1ad87cu: goto label_1ad87c;
        case 0x1ad880u: goto label_1ad880;
        case 0x1ad884u: goto label_1ad884;
        case 0x1ad888u: goto label_1ad888;
        case 0x1ad88cu: goto label_1ad88c;
        case 0x1ad890u: goto label_1ad890;
        case 0x1ad894u: goto label_1ad894;
        case 0x1ad898u: goto label_1ad898;
        case 0x1ad89cu: goto label_1ad89c;
        case 0x1ad8a0u: goto label_1ad8a0;
        case 0x1ad8a4u: goto label_1ad8a4;
        case 0x1ad8a8u: goto label_1ad8a8;
        case 0x1ad8acu: goto label_1ad8ac;
        case 0x1ad8b0u: goto label_1ad8b0;
        case 0x1ad8b4u: goto label_1ad8b4;
        case 0x1ad8b8u: goto label_1ad8b8;
        case 0x1ad8bcu: goto label_1ad8bc;
        case 0x1ad8c0u: goto label_1ad8c0;
        case 0x1ad8c4u: goto label_1ad8c4;
        case 0x1ad8c8u: goto label_1ad8c8;
        case 0x1ad8ccu: goto label_1ad8cc;
        case 0x1ad8d0u: goto label_1ad8d0;
        case 0x1ad8d4u: goto label_1ad8d4;
        case 0x1ad8d8u: goto label_1ad8d8;
        case 0x1ad8dcu: goto label_1ad8dc;
        case 0x1ad8e0u: goto label_1ad8e0;
        case 0x1ad8e4u: goto label_1ad8e4;
        case 0x1ad8e8u: goto label_1ad8e8;
        case 0x1ad8ecu: goto label_1ad8ec;
        case 0x1ad8f0u: goto label_1ad8f0;
        case 0x1ad8f4u: goto label_1ad8f4;
        case 0x1ad8f8u: goto label_1ad8f8;
        case 0x1ad8fcu: goto label_1ad8fc;
        case 0x1ad900u: goto label_1ad900;
        case 0x1ad904u: goto label_1ad904;
        case 0x1ad908u: goto label_1ad908;
        case 0x1ad90cu: goto label_1ad90c;
        case 0x1ad910u: goto label_1ad910;
        case 0x1ad914u: goto label_1ad914;
        case 0x1ad918u: goto label_1ad918;
        case 0x1ad91cu: goto label_1ad91c;
        case 0x1ad920u: goto label_1ad920;
        case 0x1ad924u: goto label_1ad924;
        case 0x1ad928u: goto label_1ad928;
        case 0x1ad92cu: goto label_1ad92c;
        case 0x1ad930u: goto label_1ad930;
        case 0x1ad934u: goto label_1ad934;
        case 0x1ad938u: goto label_1ad938;
        case 0x1ad93cu: goto label_1ad93c;
        case 0x1ad940u: goto label_1ad940;
        case 0x1ad944u: goto label_1ad944;
        case 0x1ad948u: goto label_1ad948;
        case 0x1ad94cu: goto label_1ad94c;
        case 0x1ad950u: goto label_1ad950;
        case 0x1ad954u: goto label_1ad954;
        case 0x1ad958u: goto label_1ad958;
        case 0x1ad95cu: goto label_1ad95c;
        case 0x1ad960u: goto label_1ad960;
        case 0x1ad964u: goto label_1ad964;
        case 0x1ad968u: goto label_1ad968;
        case 0x1ad96cu: goto label_1ad96c;
        case 0x1ad970u: goto label_1ad970;
        case 0x1ad974u: goto label_1ad974;
        case 0x1ad978u: goto label_1ad978;
        case 0x1ad97cu: goto label_1ad97c;
        case 0x1ad980u: goto label_1ad980;
        case 0x1ad984u: goto label_1ad984;
        case 0x1ad988u: goto label_1ad988;
        case 0x1ad98cu: goto label_1ad98c;
        case 0x1ad990u: goto label_1ad990;
        case 0x1ad994u: goto label_1ad994;
        case 0x1ad998u: goto label_1ad998;
        case 0x1ad99cu: goto label_1ad99c;
        case 0x1ad9a0u: goto label_1ad9a0;
        case 0x1ad9a4u: goto label_1ad9a4;
        case 0x1ad9a8u: goto label_1ad9a8;
        case 0x1ad9acu: goto label_1ad9ac;
        case 0x1ad9b0u: goto label_1ad9b0;
        case 0x1ad9b4u: goto label_1ad9b4;
        case 0x1ad9b8u: goto label_1ad9b8;
        case 0x1ad9bcu: goto label_1ad9bc;
        case 0x1ad9c0u: goto label_1ad9c0;
        case 0x1ad9c4u: goto label_1ad9c4;
        case 0x1ad9c8u: goto label_1ad9c8;
        case 0x1ad9ccu: goto label_1ad9cc;
        case 0x1ad9d0u: goto label_1ad9d0;
        case 0x1ad9d4u: goto label_1ad9d4;
        case 0x1ad9d8u: goto label_1ad9d8;
        case 0x1ad9dcu: goto label_1ad9dc;
        case 0x1ad9e0u: goto label_1ad9e0;
        case 0x1ad9e4u: goto label_1ad9e4;
        case 0x1ad9e8u: goto label_1ad9e8;
        case 0x1ad9ecu: goto label_1ad9ec;
        case 0x1ad9f0u: goto label_1ad9f0;
        case 0x1ad9f4u: goto label_1ad9f4;
        case 0x1ad9f8u: goto label_1ad9f8;
        case 0x1ad9fcu: goto label_1ad9fc;
        case 0x1ada00u: goto label_1ada00;
        case 0x1ada04u: goto label_1ada04;
        case 0x1ada08u: goto label_1ada08;
        case 0x1ada0cu: goto label_1ada0c;
        case 0x1ada10u: goto label_1ada10;
        case 0x1ada14u: goto label_1ada14;
        default: break;
    }

    ctx->pc = 0x1ad7f0u;

label_1ad7f0:
    // 0x1ad7f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ad7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ad7f4:
    // 0x1ad7f4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1ad7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_1ad7f8:
    // 0x1ad7f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ad7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ad7fc:
    // 0x1ad7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ad7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ad800:
    // 0x1ad800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ad800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ad804:
    // 0x1ad804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ad808:
    // 0x1ad808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ad808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ad80c:
    // 0x1ad80c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ad80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1ad810:
    // 0x1ad810: 0x2471f010  addiu       $s1, $v1, -0xFF0
    ctx->pc = 0x1ad810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
label_1ad814:
    // 0x1ad814: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ad814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ad818:
    // 0x1ad818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad81c:
    // 0x1ad81c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad820:
    // 0x1ad820: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ad820u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1ad824:
    // 0x1ad824: 0xe420b4f0  swc1        $f0, -0x4B10($at)
    ctx->pc = 0x1ad824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948080), bits); }
label_1ad828:
    // 0x1ad828: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1ad828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_1ad82c:
    // 0x1ad82c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1ad82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_1ad830:
    // 0x1ad830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad834:
    // 0x1ad834: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad838:
    // 0x1ad838: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ad838u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1ad83c:
    // 0x1ad83c: 0xe420b4f4  swc1        $f0, -0x4B0C($at)
    ctx->pc = 0x1ad83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948084), bits); }
label_1ad840:
    // 0x1ad840: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1ad840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_1ad844:
    // 0x1ad844: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ad844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1ad848:
    // 0x1ad848: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad84c:
    // 0x1ad84c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad850:
    // 0x1ad850: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1ad854:
    // 0x1ad854: 0xe420b4f8  swc1        $f0, -0x4B08($at)
    ctx->pc = 0x1ad854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948088), bits); }
label_1ad858:
    // 0x1ad858: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1ad85c:
    // 0x1ad85c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ad85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1ad860:
    // 0x1ad860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad864:
    // 0x1ad864: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad868:
    // 0x1ad868: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ad868u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1ad86c:
    // 0x1ad86c: 0xe420b4fc  swc1        $f0, -0x4B04($at)
    ctx->pc = 0x1ad86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948092), bits); }
label_1ad870:
    // 0x1ad870: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ad870u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ad874:
    // 0x1ad874: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1ad878:
    if (ctx->pc == 0x1AD878u) {
        ctx->pc = 0x1AD87Cu;
        goto label_1ad87c;
    }
    ctx->pc = 0x1AD874u;
    {
        const bool branch_taken_0x1ad874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad874) {
            ctx->pc = 0x1AD9E8u;
            goto label_1ad9e8;
        }
    }
    ctx->pc = 0x1AD87Cu;
label_1ad87c:
    // 0x1ad87c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad880:
    // 0x1ad880: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad884:
    // 0x1ad884: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad888:
    // 0x1ad888: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad888u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad88c:
    // 0x1ad88c: 0x8c33b490  lw          $s3, -0x4B70($at)
    ctx->pc = 0x1ad88cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947984)));
label_1ad890:
    // 0x1ad890: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad894:
    // 0x1ad894: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad898:
    // 0x1ad898: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad89c:
    // 0x1ad89c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad89cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad8a0:
    // 0x1ad8a0: 0x8c22b4a0  lw          $v0, -0x4B60($at)
    ctx->pc = 0x1ad8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1ad8a4:
    // 0x1ad8a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ad8a8:
    // 0x1ad8a8: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x1ad8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1ad8ac:
    // 0x1ad8ac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1ad8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ad8b0:
    // 0x1ad8b0: 0x3a182  srl         $s4, $v1, 6
    ctx->pc = 0x1ad8b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_1ad8b4:
    // 0x1ad8b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad8b8:
    // 0x1ad8b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad8bc:
    // 0x1ad8bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad8c0:
    // 0x1ad8c0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad8c4:
    // 0x1ad8c4: 0x8c32b4a0  lw          $s2, -0x4B60($at)
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1ad8c8:
    // 0x1ad8c8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1ad8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_1ad8cc:
    // 0x1ad8cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1ad8d0:
    // 0x1ad8d0: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1ad8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ad8d4:
    // 0x1ad8d4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1ad8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ad8d8:
    // 0x1ad8d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad8dc:
    // 0x1ad8dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad8e0:
    // 0x1ad8e0: 0x3c020164  lui         $v0, 0x164
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)356 << 16));
label_1ad8e4:
    // 0x1ad8e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ad8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ad8e8:
    // 0x1ad8e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad8ec:
    // 0x1ad8ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad8f0:
    // 0x1ad8f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ad8f4:
    // 0x1ad8f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad8f8:
    // 0x1ad8f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ad8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad8fc:
    // 0x1ad8fc: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1ad8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1ad900:
    // 0x1ad900: 0x24024141  addiu       $v0, $zero, 0x4141
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16705));
label_1ad904:
    // 0x1ad904: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x1ad904u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
label_1ad908:
    // 0x1ad908: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad90c:
    // 0x1ad90c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad910:
    // 0x1ad910: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1ad910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1ad914:
    // 0x1ad914: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad918:
    // 0x1ad918: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad91c:
    // 0x1ad91c: 0xc42cb4f0  lwc1        $f12, -0x4B10($at)
    ctx->pc = 0x1ad91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad920:
    // 0x1ad920: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ad920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad924:
    // 0x1ad924: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ad924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ad928:
    // 0x1ad928: 0x24428210  addiu       $v0, $v0, -0x7DF0
    ctx->pc = 0x1ad928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935056));
label_1ad92c:
    // 0x1ad92c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad930:
    // 0x1ad930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ad934:
    // 0x1ad934: 0x40f809  jalr        $v0
label_1ad938:
    if (ctx->pc == 0x1AD938u) {
        ctx->pc = 0x1AD93Cu;
        goto label_1ad93c;
    }
    ctx->pc = 0x1AD934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD93Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD934u, 0x1AD93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD93Cu;
label_1ad93c:
    // 0x1ad93c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ad93cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ad940:
    // 0x1ad940: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad944:
    // 0x1ad944: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad948:
    // 0x1ad948: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad94c:
    // 0x1ad94c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad950:
    // 0x1ad950: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad954:
    // 0x1ad954: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad958:
    // 0x1ad958: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad95c:
    // 0x1ad95c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad95cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad960:
    // 0x1ad960: 0x8c22b470  lw          $v0, -0x4B90($at)
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad964:
    // 0x1ad964: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ad968:
    // 0x1ad968: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x1ad968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1ad96c:
    // 0x1ad96c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ad96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ad970:
    // 0x1ad970: 0x3a102  srl         $s4, $v1, 4
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1ad974:
    // 0x1ad974: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad978:
    // 0x1ad978: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad97c:
    // 0x1ad97c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad980:
    // 0x1ad980: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad984:
    // 0x1ad984: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad988:
    // 0x1ad988: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad98c:
    // 0x1ad98c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad990:
    // 0x1ad990: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad994:
    // 0x1ad994: 0x8c32b470  lw          $s2, -0x4B90($at)
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad998:
    // 0x1ad998: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ad998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1ad99c:
    // 0x1ad99c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1ad99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1ad9a0:
    // 0x1ad9a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad9a4:
    // 0x1ad9a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1ad9a8:
    // 0x1ad9a8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1ad9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1ad9ac:
    // 0x1ad9ac: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x1ad9acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
label_1ad9b0:
    // 0x1ad9b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad9b4:
    // 0x1ad9b4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad9b8:
    // 0x1ad9b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad9bc:
    // 0x1ad9bc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad9c0:
    // 0x1ad9c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad9c4:
    // 0x1ad9c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad9c8:
    // 0x1ad9c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad9cc:
    // 0x1ad9cc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad9d0:
    // 0x1ad9d0: 0x8c24b470  lw          $a0, -0x4B90($at)
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad9d4:
    // 0x1ad9d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ad9d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ad9d8:
    // 0x1ad9d8: 0xc06aff4  jal         func_1ABFD0
label_1ad9dc:
    if (ctx->pc == 0x1AD9DCu) {
        ctx->pc = 0x1AD9E0u;
        goto label_1ad9e0;
    }
    ctx->pc = 0x1AD9D8u;
    SET_GPR_U32(ctx, 31, 0x1AD9E0u);
    ctx->pc = 0x1ABFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABFD0u, 0x1AD9D8u, 0x1AD9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9E0u;
label_1ad9e0:
    // 0x1ad9e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ad9e4:
    // 0x1ad9e4: 0x0  nop
    ctx->pc = 0x1ad9e4u;
    // NOP
label_1ad9e8:
    // 0x1ad9e8: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1ad9e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ad9ec:
    // 0x1ad9ec: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
label_1ad9f0:
    if (ctx->pc == 0x1AD9F0u) {
        ctx->pc = 0x1AD9F4u;
        goto label_1ad9f4;
    }
    ctx->pc = 0x1AD9ECu;
    {
        const bool branch_taken_0x1ad9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9ec) {
            ctx->pc = 0x1AD87Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad87c;
        }
    }
    ctx->pc = 0x1AD9F4u;
label_1ad9f4:
    // 0x1ad9f4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1ad9f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ad9f8:
    // 0x1ad9f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ad9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ad9fc:
    // 0x1ad9fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ad9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ada00:
    // 0x1ada00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ada00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ada04:
    // 0x1ada04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ada04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ada08:
    // 0x1ada08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ada08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ada0c:
    // 0x1ada0c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ada0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1ada10:
    // 0x1ada10: 0x3e00008  jr          $ra
label_1ada14:
    if (ctx->pc == 0x1ADA14u) {
        ctx->pc = 0x1ADA18u;
        goto label_fallthrough_0x1ada10;
    }
    ctx->pc = 0x1ADA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ada10:
    ctx->pc = 0x1ADA18u;
}
