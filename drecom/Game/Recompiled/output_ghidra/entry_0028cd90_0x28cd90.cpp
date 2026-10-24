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

// Function: entry_0028cd90
// Address: 0x28cd90 - 0x28ce28
void entry_0028cd90_0x28cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cd90_0x28cd90");
#endif

    switch (ctx->pc) {
        case 0x28cde4u: goto label_28cde4;
        default: break;
    }

    ctx->pc = 0x28cd90u;

    // 0x28cd90: 0x26150120  addiu       $s5, $s0, 0x120
    ctx->pc = 0x28cd90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28cd94: 0x82035de8  lb          $v1, 0x5DE8($s0)
    ctx->pc = 0x28cd94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28cd98: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28cd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28cd9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28cd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28cda0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28cda4: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x28cda4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28cda8: 0xafb20178  sw          $s2, 0x178($sp)
    ctx->pc = 0x28cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 18));
    // 0x28cdac: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x28cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28cdb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28cdb4: 0x344400a4  ori         $a0, $v0, 0xA4
    ctx->pc = 0x28cdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x28cdb8: 0xafa4017c  sw          $a0, 0x17C($sp)
    ctx->pc = 0x28cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 4));
    // 0x28cdbc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28cdc0: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x28cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x28cdc4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28cdc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28cdc8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x28cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x28cdcc: 0x34464000  ori         $a2, $v0, 0x4000
    ctx->pc = 0x28cdccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28cdd0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28cdd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28cdd4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28cdd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cdd8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28cdd8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cddc: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28CDDCu;
    SET_GPR_U32(ctx, 31, 0x28CDE4u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28CDDCu, 0x28CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDE4u;
label_28cde4:
    // 0x28cde4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28cde4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cde8: 0xafa60174  sw          $a2, 0x174($sp)
    ctx->pc = 0x28cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 6));
    // 0x28cdec: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x28cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28cdf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cdf4: 0x1065001e  beq         $v1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28CDF4u;
    {
        const bool branch_taken_0x28cdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x28cdf4) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CDFCu;
    // 0x28cdfc: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ce00: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28ce00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28ce04: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28ce08: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28ce08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28ce0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce10: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ce14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ce18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce1c: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28ce20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28CE20u;
    {
        const bool branch_taken_0x28ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ce20) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CE28u;
}
