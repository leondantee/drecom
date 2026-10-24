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

// Function: entry_00262fb0
// Address: 0x262fb0 - 0x262fd8
void entry_00262fb0_0x262fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262fb0_0x262fb0");
#endif

    ctx->pc = 0x262fb0u;

    // 0x262fb0: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x262fb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x262fb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262fb8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x262fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x262fbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x262FBCu;
    {
        const bool branch_taken_0x262fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262fbc) {
            ctx->pc = 0x262FD8u;
            return;
        }
    }
    ctx->pc = 0x262FC4u;
    // 0x262fc4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x262fc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x262fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x262fcc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x262fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262fd0: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x262fd0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x262fd4: 0x0  nop
    ctx->pc = 0x262fd4u;
    // NOP
    ctx->pc = 0x262fd8u;
}
