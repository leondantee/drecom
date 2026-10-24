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

// Function: entry_00108a30
// Address: 0x108a30 - 0x108a64
void entry_00108a30_0x108a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a30_0x108a30");
#endif

    ctx->pc = 0x108a30u;

    // 0x108a30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x108a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108a34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x108a34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x108a38: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x108a38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108a3c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x108a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x108a40: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x108a40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108a44: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108a44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108a48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108a4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108a50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108a54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a5c: 0x804217a  j           func_1085E8
    ctx->pc = 0x108A5Cu;
    ctx->pc = 0x108A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A5Cu;
    // 0x108a60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085E8u;
    _markOutput_0x1085e8(rdram, ctx, runtime); return;
    ctx->pc = 0x108A64u;
}
