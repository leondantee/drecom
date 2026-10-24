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

// Function: entry_00137eb8
// Address: 0x137eb8 - 0x137ee4
void entry_00137eb8_0x137eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137eb8_0x137eb8");
#endif

    ctx->pc = 0x137eb8u;

    // 0x137eb8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x137eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x137ebc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x137EBCu;
    {
        const bool branch_taken_0x137ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137ebc) {
            ctx->pc = 0x137E90u;
            return;
        }
    }
    ctx->pc = 0x137EC4u;
    // 0x137ec4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x137ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x137ec8: 0xa662008e  sh          $v0, 0x8E($s3)
    ctx->pc = 0x137ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x137ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137ed0: 0x0  nop
    ctx->pc = 0x137ed0u;
    // NOP
    // 0x137ed4: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x137ed8: 0x9262009a  lbu         $v0, 0x9A($s3)
    ctx->pc = 0x137ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x137edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137ee0: 0xa262009a  sb          $v0, 0x9A($s3)
    ctx->pc = 0x137ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x137ee4u;
}
