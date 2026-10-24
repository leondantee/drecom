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

// Function: entry_0010a904
// Address: 0x10a904 - 0x10a94c
void entry_0010a904_0x10a904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a904_0x10a904");
#endif

    ctx->pc = 0x10a904u;

    // 0x10a904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a908: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10a90c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a910: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x10a910u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x10a914: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a918: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10a918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a91c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10a920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a924: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10a928: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10a92c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a934: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x10a934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x10a938: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A938u;
    {
        const bool branch_taken_0x10a938 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A938u;
        // 0x10a93c: 0xaea03d1c  sw          $zero, 0x3D1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 15644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a938) {
            ctx->pc = 0x10A94Cu;
            return;
        }
    }
    ctx->pc = 0x10A940u;
    // 0x10a940: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10a940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10a944: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A944u;
    {
        const bool branch_taken_0x10a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a944) {
            ctx->pc = 0x10A948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A944u;
            // 0x10a948: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A954u;
            return;
        }
    }
    ctx->pc = 0x10A94Cu;
}
