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

// Function: entry_00213edc
// Address: 0x213edc - 0x213f08
void entry_00213edc_0x213edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213edc_0x213edc");
#endif

    ctx->pc = 0x213edcu;

    // 0x213edc: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x213edcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x213ee0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x213ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x213ee4: 0x26229e50  addiu       $v0, $s1, -0x61B0
    ctx->pc = 0x213ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942288));
    // 0x213ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213eec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ef0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x213ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619E5Cu));
    // 0x213ef4: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x213EF4u;
    {
        const bool branch_taken_0x213ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF4u;
        // 0x213ef8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ef4) {
            ctx->pc = 0x214000u;
            return;
        }
    }
    ctx->pc = 0x213EFCu;
    // 0x213efc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x213efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x213f00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x213f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x213f04: 0x0  nop
    ctx->pc = 0x213f04u;
    // NOP
    ctx->pc = 0x213f08u;
}
