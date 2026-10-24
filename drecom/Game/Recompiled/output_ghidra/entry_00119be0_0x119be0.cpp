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

// Function: entry_00119be0
// Address: 0x119be0 - 0x119c04
void entry_00119be0_0x119be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119be0_0x119be0");
#endif

    ctx->pc = 0x119be0u;

    // 0x119be0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x119be0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x119be4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x119be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119be8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x119be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119bec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x119becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119bf0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x119bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119bf4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x119bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119bf8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x119bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119bfc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119c00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x119c04u;
}
