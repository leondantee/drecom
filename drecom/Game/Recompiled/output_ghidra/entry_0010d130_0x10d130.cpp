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

// Function: entry_0010d130
// Address: 0x10d130 - 0x10d180
void entry_0010d130_0x10d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d130_0x10d130");
#endif

    ctx->pc = 0x10d130u;

    // 0x10d130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d138: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d138u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10d13c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10d140: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10d140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10d144: 0xae0345f8  sw          $v1, 0x45F8($s0)
    ctx->pc = 0x10d144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10d148: 0x8e0245f8  lw          $v0, 0x45F8($s0)
    ctx->pc = 0x10d148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845F8u));
    // 0x10d14c: 0xac8245fc  sw          $v0, 0x45FC($a0)
    ctx->pc = 0x10d14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845FCu, _value); } while (0);
    // 0x10d150: 0x8ca345c8  lw          $v1, 0x45C8($a1)
    ctx->pc = 0x10d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17864)));
    // 0x10d154: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10D154u;
    {
        const bool branch_taken_0x10d154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D154u;
        // 0x10d158: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d154) {
            ctx->pc = 0x10D180u;
            return;
        }
    }
    ctx->pc = 0x10D15Cu;
    // 0x10d15c: 0x8e0345f8  lw          $v1, 0x45F8($s0)
    ctx->pc = 0x10d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17912)));
    // 0x10d160: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x10d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10d164: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D164u;
    {
        const bool branch_taken_0x10d164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D164u;
        // 0x10d168: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d164) {
            ctx->pc = 0x10D180u;
            return;
        }
    }
    ctx->pc = 0x10D16Cu;
    // 0x10d16c: 0xae0045f8  sw          $zero, 0x45F8($s0)
    ctx->pc = 0x10d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17912), GPR_U32(ctx, 0));
    // 0x10d170: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10d174: 0xac4045c4  sw          $zero, 0x45C4($v0)
    ctx->pc = 0x10d174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3845C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C4u, _value); } while (0);
    // 0x10d178: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10D178u;
    {
        const bool branch_taken_0x10d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D178u;
        // 0x10d17c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d178) {
            ctx->pc = 0x10D1CCu;
            return;
        }
    }
    ctx->pc = 0x10D180u;
}
