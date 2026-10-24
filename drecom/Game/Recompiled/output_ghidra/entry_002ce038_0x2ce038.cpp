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

// Function: entry_002ce038
// Address: 0x2ce038 - 0x2ce068
void entry_002ce038_0x2ce038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce038_0x2ce038");
#endif

    ctx->pc = 0x2ce038u;

    // 0x2ce038: 0x96021720  lhu         $v0, 0x1720($s0)
    ctx->pc = 0x2ce038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5920)));
    // 0x2ce03c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce040: 0xa6021720  sh          $v0, 0x1720($s0)
    ctx->pc = 0x2ce040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5920), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce044: 0x960218b0  lhu         $v0, 0x18B0($s0)
    ctx->pc = 0x2ce044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6320)));
    // 0x2ce048: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce04c: 0xa60218b0  sh          $v0, 0x18B0($s0)
    ctx->pc = 0x2ce04cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce050: 0x960226c0  lhu         $v0, 0x26C0($s0)
    ctx->pc = 0x2ce050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9920)));
    // 0x2ce054: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce058: 0xa60226c0  sh          $v0, 0x26C0($s0)
    ctx->pc = 0x2ce058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9920), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce05c: 0x96022d00  lhu         $v0, 0x2D00($s0)
    ctx->pc = 0x2ce05cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11520)));
    // 0x2ce060: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce064: 0xa6022d00  sh          $v0, 0x2D00($s0)
    ctx->pc = 0x2ce064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11520), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2ce068u;
}
