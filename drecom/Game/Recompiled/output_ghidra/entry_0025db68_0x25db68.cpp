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

// Function: entry_0025db68
// Address: 0x25db68 - 0x25dbec
void entry_0025db68_0x25db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025db68_0x25db68");
#endif

    switch (ctx->pc) {
        case 0x25dbe4u: goto label_25dbe4;
        default: break;
    }

    ctx->pc = 0x25db68u;

    // 0x25db68: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x25db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25db6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25db70: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x25DB70u;
    {
        const bool branch_taken_0x25db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db70) {
            ctx->pc = 0x25DC0Cu;
            return;
        }
    }
    ctx->pc = 0x25DB78u;
    // 0x25db78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25db7c: 0x2821804  sllv        $v1, $v0, $s4
    ctx->pc = 0x25db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25db80: 0x3c023007  lui         $v0, 0x3007
    ctx->pc = 0x25db80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12295 << 16));
    // 0x25db84: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x25db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x25db88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25db8c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25DB8Cu;
    {
        const bool branch_taken_0x25db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db8c) {
            ctx->pc = 0x25DC0Cu;
            return;
        }
    }
    ctx->pc = 0x25DB94u;
    // 0x25db94: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25db94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25db98: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25db9c: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x25db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25dba0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DBA0u;
    {
        const bool branch_taken_0x25dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dba0) {
            ctx->pc = 0x25DBECu;
            return;
        }
    }
    ctx->pc = 0x25DBA8u;
    // 0x25dba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dbac: 0xa7a3010a  sh          $v1, 0x10A($sp)
    ctx->pc = 0x25dbacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 3));
    // 0x25dbb0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dbb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dbb8: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x25dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25dbbc: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x25dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x25dbc0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25dbc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25dbc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25dbcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dbd0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x25dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25dbd4: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25dbd8: 0x24460cb0  addiu       $a2, $v0, 0xCB0
    ctx->pc = 0x25dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x25dbdc: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DBDCu;
    SET_GPR_U32(ctx, 31, 0x25DBE4u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DBDCu, 0x25DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBE4u;
label_25dbe4:
    // 0x25dbe4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25DBE4u;
    {
        const bool branch_taken_0x25dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dbe4) {
            ctx->pc = 0x25DC80u;
            return;
        }
    }
    ctx->pc = 0x25DBECu;
}
