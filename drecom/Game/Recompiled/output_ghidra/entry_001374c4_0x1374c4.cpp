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

// Function: entry_001374c4
// Address: 0x1374c4 - 0x137524
void entry_001374c4_0x1374c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001374c4_0x1374c4");
#endif

    ctx->pc = 0x1374c4u;

    // 0x1374c4: 0x93838094  lbu         $v1, -0x7F6C($gp)
    ctx->pc = 0x1374c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x1374c8: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x1374C8u;
    {
        const bool branch_taken_0x1374c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374c8) {
            ctx->pc = 0x137804u;
            return;
        }
    }
    ctx->pc = 0x1374D0u;
    // 0x1374d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1374d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1374d4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1374d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1374d8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1374d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1374dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1374e0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1374e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1374e4: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1374e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1374e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1374e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1374ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1374ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1374f0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1374f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374f4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1374f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1374f8: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1374f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1374fc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1374fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x137500: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x137500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137504: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x137504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x137508: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x137508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13750c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x13750cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137510: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x137510u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137514: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x137514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x137518: 0x93828090  lbu         $v0, -0x7F70($gp)
    ctx->pc = 0x137518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x13751c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137520: 0xa3828090  sb          $v0, -0x7F70($gp)
    ctx->pc = 0x137520u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934672), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x137524u;
}
