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

// Function: entry_001379e0
// Address: 0x1379e0 - 0x137a0c
void entry_001379e0_0x1379e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001379e0_0x1379e0");
#endif

    ctx->pc = 0x1379e0u;

    // 0x1379e0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1379e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1379e4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1379E4u;
    {
        const bool branch_taken_0x1379e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1379e4) {
            ctx->pc = 0x1379B8u;
            return;
        }
    }
    ctx->pc = 0x1379ECu;
    // 0x1379ec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1379ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1379f0: 0xa664008e  sh          $a0, 0x8E($s3)
    ctx->pc = 0x1379f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 4));
    // 0x1379f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1379f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1379f8: 0x0  nop
    ctx->pc = 0x1379f8u;
    // NOP
    // 0x1379fc: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1379fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x137a00: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x137a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x137a04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137a08: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x137a08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x137a0cu;
}
