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

// Function: entry_002fb948
// Address: 0x2fb948 - 0x2fb980
void entry_002fb948_0x2fb948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb948_0x2fb948");
#endif

    ctx->pc = 0x2fb948u;

    // 0x2fb948: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb94c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2fb94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fb950: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB950u;
    {
        const bool branch_taken_0x2fb950 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb950) {
            ctx->pc = 0x2FB980u;
            return;
        }
    }
    ctx->pc = 0x2FB958u;
    // 0x2fb958: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb95c: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x2fb95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fb960: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2fb960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb964: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB964u;
    {
        const bool branch_taken_0x2fb964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb964) {
            ctx->pc = 0x2FB980u;
            return;
        }
    }
    ctx->pc = 0x2FB96Cu;
    // 0x2fb96c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb970: 0x8c7600d4  lw          $s6, 0xD4($v1)
    ctx->pc = 0x2fb970u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb974: 0x2ac60011  slti        $a2, $s6, 0x11
    ctx->pc = 0x2fb974u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2fb978: 0x14c0001f  bnez        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FB978u;
    {
        const bool branch_taken_0x2fb978 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb978) {
            ctx->pc = 0x2FB9F8u;
            return;
        }
    }
    ctx->pc = 0x2FB980u;
}
