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

// Function: entry_001b11d8
// Address: 0x1b11d8 - 0x1b1210
void entry_001b11d8_0x1b11d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b11d8_0x1b11d8");
#endif

    ctx->pc = 0x1b11d8u;

label_1b11d8:
    // 0x1b11d8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1b11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b11dc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b11dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b11e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b11e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b11e4: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1b11e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b11e8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b11e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b11ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b11ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b11f0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b11f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b11f4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1b11f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1b11f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b11fc: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B11FCu;
    {
        const bool branch_taken_0x1b11fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b11fc) {
            ctx->pc = 0x1B11D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b11d8;
        }
    }
    ctx->pc = 0x1B1204u;
    // 0x1b1204: 0x8eb4001c  lw          $s4, 0x1C($s5)
    ctx->pc = 0x1b1204u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1b1208: 0x8eb20010  lw          $s2, 0x10($s5)
    ctx->pc = 0x1b1208u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1b120c: 0xaeb3002c  sw          $s3, 0x2C($s5)
    ctx->pc = 0x1b120cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 19));
    ctx->pc = 0x1b1210u;
}
