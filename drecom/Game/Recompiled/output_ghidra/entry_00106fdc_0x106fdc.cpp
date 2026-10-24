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

// Function: entry_00106fdc
// Address: 0x106fdc - 0x107024
void entry_00106fdc_0x106fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106fdc_0x106fdc");
#endif

    ctx->pc = 0x106fdcu;

    // 0x106fdc: 0xae82449c  sw          $v0, 0x449C($s4)
    ctx->pc = 0x106fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17564), GPR_U32(ctx, 2));
    // 0x106fe0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x106fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x106fe4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x106fe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x106fe8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x106fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x106fec: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x106fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106ff0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x106ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x106ff4: 0xaec33d08  sw          $v1, 0x3D08($s6)
    ctx->pc = 0x106ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15624), GPR_U32(ctx, 3));
    // 0x106ff8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x106ff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x106ffc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x106ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107000: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x107000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107004: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x107004u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107008: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10700c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10700cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107010: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107014: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10701c: 0x3e00008  jr          $ra
    ctx->pc = 0x10701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10701Cu;
        // 0x107020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10701Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107024u;
}
