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

// Function: entry_002a20c0
// Address: 0x2a20c0 - 0x2a2188
void entry_002a20c0_0x2a20c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a20c0_0x2a20c0");
#endif

    ctx->pc = 0x2a20c0u;

    // 0x2a20c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a20c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a20c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a20cc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A20CCu;
    {
        const bool branch_taken_0x2a20cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a20cc) {
            ctx->pc = 0x2A2188u;
            return;
        }
    }
    ctx->pc = 0x2A20D4u;
    // 0x2a20d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a20d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a20dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a20e0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2a20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a20e4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a20e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a20e8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a20ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a20ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a20f0: 0x0  nop
    ctx->pc = 0x2a20f0u;
    // NOP
    // 0x2a20f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a20f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a20f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a20f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a20fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2100: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2104: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a2104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a2108: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2a2108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a210c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a210cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2110: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a2114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2118: 0x0  nop
    ctx->pc = 0x2a2118u;
    // NOP
    // 0x2a211c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a211cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2120: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a2124: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2128: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a212c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a2130: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2a2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2134: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a2134u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2138: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a213c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2140: 0x0  nop
    ctx->pc = 0x2a2140u;
    // NOP
    // 0x2a2144: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2148: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2a2148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a214c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2150: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a2150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2154: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2a2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2158: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a215c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2a215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2a2160: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2164: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2a2164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2168: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a216c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a216cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2170: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2a2170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2a2174: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2178: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a2178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a217c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2a217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2180: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2184: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2a2184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    ctx->pc = 0x2a2188u;
}
