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

// Function: entry_0027b8fc
// Address: 0x27b8fc - 0x27b9b0
void entry_0027b8fc_0x27b8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b8fc_0x27b8fc");
#endif

    switch (ctx->pc) {
        case 0x27b9a8u: goto label_27b9a8;
        default: break;
    }

    ctx->pc = 0x27b8fcu;

    // 0x27b8fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b900: 0x8c241a9c  lw          $a0, 0x1A9C($at)
    ctx->pc = 0x27b900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b904: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27b904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27b908: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b90c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27B90Cu;
    {
        const bool branch_taken_0x27b90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b90c) {
            ctx->pc = 0x27B9E8u;
            return;
        }
    }
    ctx->pc = 0x27B914u;
    // 0x27b914: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b918: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x27b918u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA0u));
    // 0x27b91c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27b920: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b924: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x27B924u;
    {
        const bool branch_taken_0x27b924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b924) {
            ctx->pc = 0x27B9E8u;
            return;
        }
    }
    ctx->pc = 0x27B92Cu;
    // 0x27b92c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b930: 0x3c034692  lui         $v1, 0x4692
    ctx->pc = 0x27b930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18066 << 16));
    // 0x27b934: 0x3463cc00  ori         $v1, $v1, 0xCC00
    ctx->pc = 0x27b934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52224);
    // 0x27b938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b93c: 0x0  nop
    ctx->pc = 0x27b93cu;
    // NOP
    // 0x27b940: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x27b940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b944: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x27b944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x27b948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b94c: 0x0  nop
    ctx->pc = 0x27b94cu;
    // NOP
    // 0x27b950: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27b954: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27b954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27b958: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x27b958u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b95c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27b95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b960: 0x0  nop
    ctx->pc = 0x27b960u;
    // NOP
    // 0x27b964: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x27B964u;
    {
        const bool branch_taken_0x27b964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b964) {
            ctx->pc = 0x27B9E8u;
            return;
        }
    }
    ctx->pc = 0x27B96Cu;
    // 0x27b96c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b970: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27b970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b974: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x27b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x27b978: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27b97c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27b980: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b984: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27b984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27b988: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b98c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x27b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27b990: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x27b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x27b994: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B994u;
    {
        const bool branch_taken_0x27b994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b994) {
            ctx->pc = 0x27B9B0u;
            return;
        }
    }
    ctx->pc = 0x27B99Cu;
    // 0x27b99c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x27b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x27b9a0: 0xc062010  jal         func_188040
    ctx->pc = 0x27B9A0u;
    SET_GPR_U32(ctx, 31, 0x27B9A8u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27B9A0u, 0x27B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9A8u;
label_27b9a8:
    // 0x27b9a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27B9A8u;
    {
        const bool branch_taken_0x27b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b9a8) {
            ctx->pc = 0x27B9E8u;
            return;
        }
    }
    ctx->pc = 0x27B9B0u;
}
