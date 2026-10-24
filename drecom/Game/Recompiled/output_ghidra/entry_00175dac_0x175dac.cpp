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

// Function: entry_00175dac
// Address: 0x175dac - 0x175e10
void entry_00175dac_0x175dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175dac_0x175dac");
#endif

    ctx->pc = 0x175dacu;

    // 0x175dac: 0x92c2008c  lbu         $v0, 0x8C($s6)
    ctx->pc = 0x175dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x175db0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175db4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x175db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175db8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x175db8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x175dbc: 0x92c2008d  lbu         $v0, 0x8D($s6)
    ctx->pc = 0x175dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 141)));
    // 0x175dc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175dc4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x175dc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175dc8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175dc8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175dcc: 0x92c2008e  lbu         $v0, 0x8E($s6)
    ctx->pc = 0x175dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 142)));
    // 0x175dd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175dd4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x175dd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175dd8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x175dd8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x175ddc: 0x92c2008f  lbu         $v0, 0x8F($s6)
    ctx->pc = 0x175ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 143)));
    // 0x175de0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175de4: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x175de4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175de8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x175de8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x175dec: 0xc6d40090  lwc1        $f20, 0x90($s6)
    ctx->pc = 0x175decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x175df0: 0xc6d50094  lwc1        $f21, 0x94($s6)
    ctx->pc = 0x175df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x175df4: 0xc6d60098  lwc1        $f22, 0x98($s6)
    ctx->pc = 0x175df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x175df8: 0xc6d7009c  lwc1        $f23, 0x9C($s6)
    ctx->pc = 0x175df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x175dfc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175e00: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x175e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x175e04: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x175e04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175e08: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x175E08u;
    {
        const bool branch_taken_0x175e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175e08) {
            ctx->pc = 0x175F78u;
            return;
        }
    }
    ctx->pc = 0x175E10u;
}
