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

// Function: entry_001187fc
// Address: 0x1187fc - 0x11885c
void entry_001187fc_0x1187fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001187fc_0x1187fc");
#endif

    switch (ctx->pc) {
        case 0x118854u: goto label_118854;
        default: break;
    }

    ctx->pc = 0x1187fcu;

    // 0x1187fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1187fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118800: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x118800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118804: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x118804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x118808: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x118808u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x11880c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x11880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x118810: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x118810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x118814: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x118814u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x118818: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x118818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11881c: 0x25c34930  addiu       $v1, $t6, 0x4930
    ctx->pc = 0x11881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 18736));
    // 0x118820: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x118820u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x118824: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x118824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x118828: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11882c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11882cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x118830: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x118830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x118834: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x118834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x118838: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x118838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x11883c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118840: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x118840u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x118844: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x118844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x118848: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x118848u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x11884c: 0xc046346  jal         func_118D18
    ctx->pc = 0x11884Cu;
    SET_GPR_U32(ctx, 31, 0x118854u);
    ctx->pc = 0x118850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11884Cu;
    // 0x118850: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D18u;
    {
        ctx->pc = 0x118854u;
        ps2_stubs::__malloc_unlock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x118854u) { return; }
    ctx->pc = 0x118854u;
label_118854:
    // 0x118854: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x118854u;
    {
        const bool branch_taken_0x118854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118854u;
        // 0x118858: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118854) {
            ctx->pc = 0x1188C0u;
            return;
        }
    }
    ctx->pc = 0x11885Cu;
}
