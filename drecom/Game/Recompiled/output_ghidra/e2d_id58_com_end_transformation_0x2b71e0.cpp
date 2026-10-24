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

// Function: e2d_id58_com_end_transformation
// Address: 0x2b71e0 - 0x2b72cc
void e2d_id58_com_end_transformation_0x2b71e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_com_end_transformation_0x2b71e0");
#endif

    ctx->pc = 0x2b71e0u;

    // 0x2b71e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b71e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b71e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b71e8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b71ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b71ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b71f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b71f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b71f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b71f8: 0x3c033f87  lui         $v1, 0x3F87
    ctx->pc = 0x2b71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16263 << 16));
    // 0x2b71fc: 0x3463ae14  ori         $v1, $v1, 0xAE14
    ctx->pc = 0x2b71fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44564);
    // 0x2b7200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7204: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7208: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b7208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b720c: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2b720cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2b7210: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b7210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b7214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7218: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b721c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b721cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b7220: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2b7220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b7224: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7228: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b7228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b722c: 0x3c03bccc  lui         $v1, 0xBCCC
    ctx->pc = 0x2b722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48332 << 16));
    // 0x2b7230: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b7230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b7234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7238: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b723c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b723cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b7240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7244: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7248: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b7248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b724c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7254: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b7254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7258: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b725c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b725cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b7260: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b7260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7264: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b7264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b726c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b726cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b7270: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b7270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b7274: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7278: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b7278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b727c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b727cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7280: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b7280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7288: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b7288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b728c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b728cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b7290: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b7290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b7294: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7298: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b7298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b729c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b729cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b72a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b72a4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2b72a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b72a8: 0x0  nop
    ctx->pc = 0x2b72a8u;
    // NOP
    // 0x2b72ac: 0x0  nop
    ctx->pc = 0x2b72acu;
    // NOP
    // 0x2b72b0: 0x1810  mfhi        $v1
    ctx->pc = 0x2b72b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b72b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b72b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b72b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b72bc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b72bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b72c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b72c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b72c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B72C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B72C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B72CCu;
}
