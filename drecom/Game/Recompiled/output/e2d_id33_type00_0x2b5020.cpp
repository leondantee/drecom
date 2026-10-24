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

// Function: e2d_id33_type00
// Address: 0x2b5020 - 0x2b50f8
void e2d_id33_type00_0x2b5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id33_type00_0x2b5020");
#endif

    ctx->pc = 0x2b5020u;

    // 0x2b5020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5024: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5028: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b502c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5030: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b5030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5034: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b503c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5040: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b5040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b5044: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b504c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5050: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b5050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b5054: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b505c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5060: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b5060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b5064: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b506c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5070: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b5070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b5074: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b5074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b5078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b507c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5080: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5084: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5088: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b508c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b508cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5090: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5098: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b509c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b509cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b50a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b50a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b50a4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b50a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b50a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b50ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b50acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b50b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b50b4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b50b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b50b8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b50bc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b50c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b50c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b50c4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b50c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b50c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b50c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b50cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b50d0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2b50d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b50d4: 0x0  nop
    ctx->pc = 0x2b50d4u;
    // NOP
    // 0x2b50d8: 0x0  nop
    ctx->pc = 0x2b50d8u;
    // NOP
    // 0x2b50dc: 0x1810  mfhi        $v1
    ctx->pc = 0x2b50dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b50e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b50e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b50e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b50e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b50e8: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b50e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b50ec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b50ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b50f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B50F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B50F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B50F8u;
}
