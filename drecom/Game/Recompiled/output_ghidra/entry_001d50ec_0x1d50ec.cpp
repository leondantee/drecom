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

// Function: entry_001d50ec
// Address: 0x1d50ec - 0x1d5198
void entry_001d50ec_0x1d50ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d50ec_0x1d50ec");
#endif

    switch (ctx->pc) {
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d516cu: goto label_1d516c;
        default: break;
    }

    ctx->pc = 0x1d50ecu;

    // 0x1d50ec: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d50ecu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d50f0: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1d50f4: 0x26710050  addiu       $s1, $s3, 0x50
    ctx->pc = 0x1d50f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1d50f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d50f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d50fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5100: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d5100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d5104: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5108: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5108u;
    SET_GPR_U32(ctx, 31, 0x1D5110u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5110u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5110u) { return; }
    ctx->pc = 0x1D5110u;
label_1d5110:
    // 0x1d5110: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d5110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d5114: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5118: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d511c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d511cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5120: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5120u;
    SET_GPR_U32(ctx, 31, 0x1D5128u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5128u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5128u) { return; }
    ctx->pc = 0x1D5128u;
label_1d5128:
    // 0x1d5128: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d512c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d5130: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d5130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d5134: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d5134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5138: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d5138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d513c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d513cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1d5140: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d5140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d5144: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5148: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d5148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d514c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D514Cu;
    SET_GPR_U32(ctx, 31, 0x1D5154u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D514Cu, 0x1D5154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5154u;
label_1d5154:
    // 0x1d5154: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1d5154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1d5158: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d515c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5160: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d5164: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D5164u;
    SET_GPR_U32(ctx, 31, 0x1D516Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D5164u, 0x1D516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D516Cu;
label_1d516c:
    // 0x1d516c: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1d516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1d5170: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d5174: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d5174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d5178: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d5178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d517c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d517cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d5180: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5180u;
    {
        const bool branch_taken_0x1d5180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5180) {
            ctx->pc = 0x1D5198u;
            return;
        }
    }
    ctx->pc = 0x1D5188u;
    // 0x1d5188: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d518c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d5190: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d5194: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d5194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1d5198u;
}
