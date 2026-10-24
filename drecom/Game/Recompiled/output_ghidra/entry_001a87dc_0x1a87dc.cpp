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

// Function: entry_001a87dc
// Address: 0x1a87dc - 0x1a88b0
void entry_001a87dc_0x1a87dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a87dc_0x1a87dc");
#endif

    switch (ctx->pc) {
        case 0x1a8830u: goto label_1a8830;
        case 0x1a883cu: goto label_1a883c;
        case 0x1a8850u: goto label_1a8850;
        case 0x1a8860u: goto label_1a8860;
        case 0x1a88a8u: goto label_1a88a8;
        default: break;
    }

    ctx->pc = 0x1a87dcu;

    // 0x1a87dc: 0x96020128  lhu         $v0, 0x128($s0)
    ctx->pc = 0x1a87dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1a87e0: 0x30443fff  andi        $a0, $v0, 0x3FFF
    ctx->pc = 0x1a87e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a87e4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1a87e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a87e8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1a87e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1a87ec: 0x9603012a  lhu         $v1, 0x12A($s0)
    ctx->pc = 0x1a87ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x1a87f0: 0x315bc  dsll32      $v0, $v1, 22
    ctx->pc = 0x1a87f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a87f4: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1a87f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a87f8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1a87f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a87fc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1a87fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1a8800: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x1a8800u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1a8804: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1a8804u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1a8808: 0x124c3c  dsll32      $t1, $s2, 16
    ctx->pc = 0x1a8808u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1a880c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1a880cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1a8810: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8814: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x1a8814u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a8818: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1a8818u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1a881c: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1a8820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a8820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8824: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a8828: 0xc0403aa  jal         func_100EA8
    ctx->pc = 0x1A8828u;
    SET_GPR_U32(ctx, 31, 0x1A8830u);
    ctx->pc = 0x100EA8u;
    {
        ctx->pc = 0x1A8830u;
        ps2_stubs::sceGsSetDefStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8830u) { return; }
    ctx->pc = 0x1A8830u;
label_1a8830:
    // 0x1a8830: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a8830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8834: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1A8834u;
    SET_GPR_U32(ctx, 31, 0x1A883Cu);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1A883Cu;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A883Cu) { return; }
    ctx->pc = 0x1A883Cu;
label_1a883c:
    // 0x1a883c: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1a883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1a8840: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a8840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a8844: 0x24653460  addiu       $a1, $v1, 0x3460
    ctx->pc = 0x1a8844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 13408));
    // 0x1a8848: 0xc04045a  jal         func_101168
    ctx->pc = 0x1A8848u;
    SET_GPR_U32(ctx, 31, 0x1A8850u);
    ctx->pc = 0x101168u;
    {
        ctx->pc = 0x1A8850u;
        ps2_stubs::sceGsExecStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8850u) { return; }
    ctx->pc = 0x1A8850u;
label_1a8850:
    // 0x1a8850: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a8850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a8854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8858: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x1A8858u;
    SET_GPR_U32(ctx, 31, 0x1A8860u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x1A8860u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8860u) { return; }
    ctx->pc = 0x1A8860u;
label_1a8860:
    // 0x1a8860: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1a8860u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8864: 0x9616012a  lhu         $s6, 0x12A($s0)
    ctx->pc = 0x1a8864u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x1a8868: 0x1615bc  dsll32      $v0, $s6, 22
    ctx->pc = 0x1a8868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 22));
    // 0x1a886c: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x1a886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a8870: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A8870u;
    {
        const bool branch_taken_0x1a8870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8870) {
            ctx->pc = 0x1A88B0u;
            return;
        }
    }
    ctx->pc = 0x1A8878u;
    // 0x1a8878: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a887c: 0x245e3460  addiu       $fp, $v0, 0x3460
    ctx->pc = 0x1a887cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 13408));
    // 0x1a8880: 0x92020313  lbu         $v0, 0x313($s0)
    ctx->pc = 0x1a8880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 787)));
    // 0x1a8884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a8884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a8888: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a888c: 0x3c22021  addu        $a0, $fp, $v0
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1a8890: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8894: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1a8894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1a8898: 0x8fb700b8  lw          $s7, 0xB8($sp)
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a889c: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x1a889cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1a88a0: 0xc06a350  jal         func_1A8D40
    ctx->pc = 0x1A88A0u;
    SET_GPR_U32(ctx, 31, 0x1A88A8u);
    ctx->pc = 0x1A8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8D40u, 0x1A88A0u, 0x1A88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88A8u;
label_1a88a8:
    // 0x1a88a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A88A8u;
    {
        const bool branch_taken_0x1a88a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a88a8) {
            ctx->pc = 0x1A88E0u;
            return;
        }
    }
    ctx->pc = 0x1A88B0u;
}
