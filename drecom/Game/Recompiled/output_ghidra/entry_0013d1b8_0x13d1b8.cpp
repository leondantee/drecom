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

// Function: entry_0013d1b8
// Address: 0x13d1b8 - 0x13d214
void entry_0013d1b8_0x13d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d1b8_0x13d1b8");
#endif

    ctx->pc = 0x13d1b8u;

    // 0x13d1b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d1bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d1c0: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13d1c4: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1c8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13D1C8u;
    {
        const bool branch_taken_0x13d1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1c8) {
            ctx->pc = 0x13D28Cu;
            return;
        }
    }
    ctx->pc = 0x13D1D0u;
    // 0x13d1d0: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1d4: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x13d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x13d1d8: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x13d1d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13d1dc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13D1DCu;
    {
        const bool branch_taken_0x13d1dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d1dc) {
            ctx->pc = 0x13D230u;
            return;
        }
    }
    ctx->pc = 0x13D1E4u;
    // 0x13d1e4: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1e8: 0x21a42  srl         $v1, $v0, 9
    ctx->pc = 0x13d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x13d1ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13d1f0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13D1F0u;
    {
        const bool branch_taken_0x13d1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d1f0) {
            ctx->pc = 0x13D214u;
            return;
        }
    }
    ctx->pc = 0x13D1F8u;
    // 0x13d1f8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x13d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x13d1fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x13d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x13d200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d204: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d208: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13d20c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13D20Cu;
    {
        const bool branch_taken_0x13d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d20c) {
            ctx->pc = 0x13D28Cu;
            return;
        }
    }
    ctx->pc = 0x13D214u;
}
