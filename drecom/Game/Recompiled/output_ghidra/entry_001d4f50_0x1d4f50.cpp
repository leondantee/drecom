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

// Function: entry_001d4f50
// Address: 0x1d4f50 - 0x1d5080
void entry_001d4f50_0x1d4f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f50_0x1d4f50");
#endif

    switch (ctx->pc) {
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5054u: goto label_1d5054;
        default: break;
    }

    ctx->pc = 0x1d4f50u;

label_1d4f50:
    // 0x1d4f50: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1d4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4f54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4f58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4f5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4f60: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d4f64: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4f68: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1d4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4f6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4f70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4f74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4f78: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1d4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d4f7c: 0x24510050  addiu       $s1, $v0, 0x50
    ctx->pc = 0x1d4f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d4f80: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d4f84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4f8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4f90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4f94: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1d4f98: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4f9c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1d4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d4fa0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4fa8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4fac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4fb0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1d4fb4: 0x24550050  addiu       $s5, $v0, 0x50
    ctx->pc = 0x1d4fb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d4fb8: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1d4fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4fbc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1d4fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1d4fc0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d4fc4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1d4fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1d4fc8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d4fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d4fcc: 0x1640ffe0  bnez        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D4FCCu;
    {
        const bool branch_taken_0x1d4fcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fcc) {
            ctx->pc = 0x1D4F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4f50;
        }
    }
    ctx->pc = 0x1D4FD4u;
    // 0x1d4fd4: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d4fd4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d4fd8: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x1d4fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1d4fdc: 0x26710050  addiu       $s1, $s3, 0x50
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1d4fe0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d4fe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d4fe4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4fe8: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d4fec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4ff0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D4FF0u;
    SET_GPR_U32(ctx, 31, 0x1D4FF8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D4FF8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4FF8u) { return; }
    ctx->pc = 0x1D4FF8u;
label_1d4ff8:
    // 0x1d4ff8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d4ff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d4ffc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5000: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d5004: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5008: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5008u;
    SET_GPR_U32(ctx, 31, 0x1D5010u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5010u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5010u) { return; }
    ctx->pc = 0x1D5010u;
label_1d5010:
    // 0x1d5010: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d5014: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d5018: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d5018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d501c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5020: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d5020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d5024: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d5024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1d5028: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d5028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d502c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5030: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d5030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d5034: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D5034u;
    SET_GPR_U32(ctx, 31, 0x1D503Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D5034u, 0x1D503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D503Cu;
label_1d503c:
    // 0x1d503c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1d503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1d5040: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d5044: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5048: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d504c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D504Cu;
    SET_GPR_U32(ctx, 31, 0x1D5054u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D504Cu, 0x1D5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5054u;
label_1d5054:
    // 0x1d5054: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1d5054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1d5058: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d505c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d505cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d5060: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d5064: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d5064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d5068: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5068u;
    {
        const bool branch_taken_0x1d5068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5068) {
            ctx->pc = 0x1D5080u;
            return;
        }
    }
    ctx->pc = 0x1D5070u;
    // 0x1d5070: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5074: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d5078: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d507c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d507cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1d5080u;
}
