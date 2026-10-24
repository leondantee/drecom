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

// Function: entry_001d9928
// Address: 0x1d9928 - 0x1d99dc
void entry_001d9928_0x1d9928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9928_0x1d9928");
#endif

    switch (ctx->pc) {
        case 0x1d99b0u: goto label_1d99b0;
        case 0x1d99bcu: goto label_1d99bc;
        default: break;
    }

    ctx->pc = 0x1d9928u;

    // 0x1d9928: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d992c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1d992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d9930: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1d9930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    // 0x1d9934: 0xa6600096  sh          $zero, 0x96($s3)
    ctx->pc = 0x1d9934u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d993c: 0x0  nop
    ctx->pc = 0x1d993cu;
    // NOP
    // 0x1d9940: 0xe6600090  swc1        $f0, 0x90($s3)
    ctx->pc = 0x1d9940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
    // 0x1d9944: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9948: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d9948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d994c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9950: 0xac22fdf8  sw          $v0, -0x208($at)
    ctx->pc = 0x1d9950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDF8u, _value); } while (0);
    // 0x1d9954: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9958: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1d9958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1d995c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9960: 0xac220df0  sw          $v0, 0xDF0($at)
    ctx->pc = 0x1d9960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DF0u, _value); } while (0);
    // 0x1d9964: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9968: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1d9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d996c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9970: 0xac220df4  sw          $v0, 0xDF4($at)
    ctx->pc = 0x1d9970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DF4u, _value); } while (0);
    // 0x1d9974: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d9974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d9978: 0x24420dfc  addiu       $v0, $v0, 0xDFC
    ctx->pc = 0x1d9978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3580));
    // 0x1d997c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d997cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9980: 0xac220df8  sw          $v0, 0xDF8($at)
    ctx->pc = 0x1d9980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DF8u, _value); } while (0);
    // 0x1d9984: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9988: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d998c: 0xac220dfc  sw          $v0, 0xDFC($at)
    ctx->pc = 0x1d998cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DFCu, _value); } while (0);
    // 0x1d9990: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9994: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d9998: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d999c: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
    // 0x1d99a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d99a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d99a4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1d99a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d99a8: 0xc05e858  jal         func_17A160
    ctx->pc = 0x1D99A8u;
    SET_GPR_U32(ctx, 31, 0x1D99B0u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x1D99A8u, 0x1D99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99B0u;
label_1d99b0:
    // 0x1d99b0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1d99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d99b4: 0xc05e964  jal         func_17A590
    ctx->pc = 0x1D99B4u;
    SET_GPR_U32(ctx, 31, 0x1D99BCu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x1D99B4u, 0x1D99BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99BCu;
label_1d99bc:
    // 0x1d99bc: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d99c0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1d99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d99c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D99C4u;
    {
        const bool branch_taken_0x1d99c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99c4) {
            ctx->pc = 0x1D99DCu;
            return;
        }
    }
    ctx->pc = 0x1D99CCu;
    // 0x1d99cc: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d99d0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1d99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d99d4: 0xc05d6cc  jal         func_175B30
    ctx->pc = 0x1D99D4u;
    SET_GPR_U32(ctx, 31, 0x1D99DCu);
    ctx->pc = 0x175B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175B30u, 0x1D99D4u, 0x1D99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99DCu;
}
