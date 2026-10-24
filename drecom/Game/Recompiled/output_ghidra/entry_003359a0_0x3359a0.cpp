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

// Function: entry_003359a0
// Address: 0x3359a0 - 0x335a6c
void entry_003359a0_0x3359a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003359a0_0x3359a0");
#endif

    switch (ctx->pc) {
        case 0x335a58u: goto label_335a58;
        default: break;
    }

    ctx->pc = 0x3359a0u;

    // 0x3359a0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359a4: 0x8c223350  lw          $v0, 0x3350($at)
    ctx->pc = 0x3359a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x893350u));
    // 0x3359a8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3359A8u;
    {
        const bool branch_taken_0x3359a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3359a8) {
            ctx->pc = 0x335A6Cu;
            return;
        }
    }
    ctx->pc = 0x3359B0u;
    // 0x3359b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359b4: 0xac203358  sw          $zero, 0x3358($at)
    ctx->pc = 0x3359b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893358u, _value); } while (0);
    // 0x3359b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3359b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3359bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359c0: 0xa0223368  sb          $v0, 0x3368($at)
    ctx->pc = 0x3359c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893368u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x893368u, _value); } while (0);
    // 0x3359c4: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x3359c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x3359c8: 0x3462c28f  ori         $v0, $v1, 0xC28F
    ctx->pc = 0x3359c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x3359cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3359ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3359d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359d4: 0xe4203364  swc1        $f0, 0x3364($at)
    ctx->pc = 0x3359d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893364u, _value); } while (0); }
    // 0x3359d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3359dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359e0: 0xa0223369  sb          $v0, 0x3369($at)
    ctx->pc = 0x3359e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893369u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x893369u, _value); } while (0);
    // 0x3359e4: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x3359e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x3359e8: 0x3443adfd  ori         $v1, $v0, 0xADFD
    ctx->pc = 0x3359e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x3359ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3359ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3359f0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359f4: 0xe4203360  swc1        $f0, 0x3360($at)
    ctx->pc = 0x3359f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893360u, _value); } while (0); }
    // 0x3359f8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x3359f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x3359fc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3359fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335a00: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a04: 0xe420336c  swc1        $f0, 0x336C($at)
    ctx->pc = 0x335a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x89336Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x89336Cu, _value); } while (0); }
    // 0x335a08: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x335a08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x335a0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x335a0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335a10: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a14: 0xe4203370  swc1        $f0, 0x3370($at)
    ctx->pc = 0x335a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893370u, _value); } while (0); }
    // 0x335a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335a1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a20: 0xa0223375  sb          $v0, 0x3375($at)
    ctx->pc = 0x335a20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893375u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x893375u, _value); } while (0);
    // 0x335a24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x335a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x335a28: 0x24626158  addiu       $v0, $v1, 0x6158
    ctx->pc = 0x335a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24920));
    // 0x335a2c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a30: 0xac223380  sw          $v0, 0x3380($at)
    ctx->pc = 0x335a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893380u, _value); } while (0);
    // 0x335a34: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335a38: 0x24423388  addiu       $v0, $v0, 0x3388
    ctx->pc = 0x335a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13192));
    // 0x335a3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335a40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x335a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x335a44: 0x2462e7d0  addiu       $v0, $v1, -0x1830
    ctx->pc = 0x335a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x335a48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x335a48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335a4c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x335a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x335a50: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x335A50u;
    SET_GPR_U32(ctx, 31, 0x335A58u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x335A58u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x335A58u) { return; }
    ctx->pc = 0x335A58u;
label_335a58:
    // 0x335a58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a5c: 0x8c223350  lw          $v0, 0x3350($at)
    ctx->pc = 0x335a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x893350u));
    // 0x335a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335a64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a68: 0xac223350  sw          $v0, 0x3350($at)
    ctx->pc = 0x335a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893350u, _value); } while (0);
    ctx->pc = 0x335a6cu;
}
