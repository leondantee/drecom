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

// Function: entry_0020dedc
// Address: 0x20dedc - 0x20dfb8
void entry_0020dedc_0x20dedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020dedc_0x20dedc");
#endif

    switch (ctx->pc) {
        case 0x20df34u: goto label_20df34;
        case 0x20df54u: goto label_20df54;
        default: break;
    }

    ctx->pc = 0x20dedcu;

    // 0x20dedc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dee0: 0x8c64135c  lw          $a0, 0x135C($v1)
    ctx->pc = 0x20dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4956)));
    // 0x20dee4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20dee8: 0x1483005a  bne         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x20DEE8u;
    {
        const bool branch_taken_0x20dee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20dee8) {
            ctx->pc = 0x20E054u;
            return;
        }
    }
    ctx->pc = 0x20DEF0u;
    // 0x20def0: 0x24020511  addiu       $v0, $zero, 0x511
    ctx->pc = 0x20def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x20def4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x20def4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20def8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20defc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20df00: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20df04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20df04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20df08: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x20df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20df0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20df10: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20df14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20df14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20df18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20df18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20df1c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x20df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20df20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df28: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x20df28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20df2c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20DF2Cu;
    SET_GPR_U32(ctx, 31, 0x20DF34u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20DF34u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DF34u) { return; }
    ctx->pc = 0x20DF34u;
label_20df34:
    // 0x20df34: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20df38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20df3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20df3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20df40: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x20df40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20df44: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20df48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20df4c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20DF4Cu;
    SET_GPR_U32(ctx, 31, 0x20DF54u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20DF4Cu, 0x20DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF54u;
label_20df54:
    // 0x20df54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df58: 0xac60135c  sw          $zero, 0x135C($v1)
    ctx->pc = 0x20df58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4956), GPR_U32(ctx, 0));
    // 0x20df5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df60: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x20df60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x20df64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df68: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x20df68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x20df6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df70: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x20df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x20df74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20df74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20df78: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x20DF78u;
    {
        const bool branch_taken_0x20df78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20df78) {
            ctx->pc = 0x20DFF0u;
            return;
        }
    }
    ctx->pc = 0x20DF80u;
    // 0x20df80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20df84: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20df84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20df88: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20df8c: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20df90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20df90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20df94: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20df94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20df98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df9c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20df9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20dfa0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20dfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20dfa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dfa8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DFA8u;
    {
        const bool branch_taken_0x20dfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20dfa8) {
            ctx->pc = 0x20DFB8u;
            return;
        }
    }
    ctx->pc = 0x20DFB0u;
    // 0x20dfb0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20DFB0u;
    {
        const bool branch_taken_0x20dfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dfb0) {
            ctx->pc = 0x20DFB8u;
            return;
        }
    }
    ctx->pc = 0x20DFB8u;
}
