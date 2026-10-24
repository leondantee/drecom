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

// Function: entry_002856ec
// Address: 0x2856ec - 0x285764
void entry_002856ec_0x2856ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002856ec_0x2856ec");
#endif

    switch (ctx->pc) {
        case 0x28572cu: goto label_28572c;
        default: break;
    }

    ctx->pc = 0x2856ecu;

    // 0x2856ec: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x2856ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x2856f0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2856f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2856f4: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2856F4u;
    {
        const bool branch_taken_0x2856f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2856f4) {
            ctx->pc = 0x285894u;
            return;
        }
    }
    ctx->pc = 0x2856FCu;
    // 0x2856fc: 0x82225de9  lb          $v0, 0x5DE9($s1)
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24041)));
    // 0x285700: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x285700u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285704: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x285704u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x285708: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x285708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x28570c: 0x34520087  ori         $s2, $v0, 0x87
    ctx->pc = 0x28570cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)135);
    // 0x285710: 0x8e2665a0  lw          $a2, 0x65A0($s1)
    ctx->pc = 0x285710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x285714: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x285714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x285718: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x285718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x28571c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x28571cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x285720: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x285720u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285724: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x285724u;
    SET_GPR_U32(ctx, 31, 0x28572Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x285724u, 0x28572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28572Cu;
label_28572c:
    // 0x28572c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28572cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x285730: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x285730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285734: 0x12a30057  beq         $s5, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x285734u;
    {
        const bool branch_taken_0x285734 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x285734) {
            ctx->pc = 0x285894u;
            return;
        }
    }
    ctx->pc = 0x28573Cu;
    // 0x28573c: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x28573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285740: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x285744: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x285748: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28574c: 0x8c231ba0  lw          $v1, 0x1BA0($at)
    ctx->pc = 0x28574cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621BA0u));
    // 0x285750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285754: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285758: 0xac231ba0  sw          $v1, 0x1BA0($at)
    ctx->pc = 0x285758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621BA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621BA0u, _value); } while (0);
    // 0x28575c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x28575Cu;
    {
        const bool branch_taken_0x28575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28575c) {
            ctx->pc = 0x285894u;
            return;
        }
    }
    ctx->pc = 0x285764u;
}
