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

// Function: entry_00104bf0
// Address: 0x104bf0 - 0x104c34
void entry_00104bf0_0x104bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104bf0_0x104bf0");
#endif

    ctx->pc = 0x104bf0u;

    // 0x104bf0: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x104bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104bf4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x104bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x104bf8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x104bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x104bfc: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x104BFCu;
    {
        const bool branch_taken_0x104bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104bfc) {
            ctx->pc = 0x104C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104BFCu;
            // 0x104c00: 0x8c43013c  lw          $v1, 0x13C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104C34u;
            return;
        }
    }
    ctx->pc = 0x104C04u;
    // 0x104c04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x104c04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c08: 0x8c440128  lw          $a0, 0x128($v0)
    ctx->pc = 0x104c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x104c0c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x104c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104c10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104c14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104c18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104c18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104c1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104c20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104c24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104c2c: 0x8041686  j           func_105A18
    ctx->pc = 0x104C2Cu;
    ctx->pc = 0x104C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C2Cu;
    // 0x104c30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A18u;
    _copyRefImage_0x105a18(rdram, ctx, runtime); return;
    ctx->pc = 0x104C34u;
}
