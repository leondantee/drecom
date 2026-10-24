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

// Function: entry_0017575c
// Address: 0x17575c - 0x175784
void entry_0017575c_0x17575c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017575c_0x17575c");
#endif

    ctx->pc = 0x17575cu;

    // 0x17575c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x175760: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x175760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175764: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x175764u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x175768: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x175768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17576c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17576cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175770: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x175770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x175774: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175774u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x175778: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x17577c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175780: 0x2450bd60  addiu       $s0, $v0, -0x42A0
    ctx->pc = 0x175780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
    ctx->pc = 0x175784u;
}
