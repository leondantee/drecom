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

// Function: e2d_id58_com_start_transformation
// Address: 0x2b70f0 - 0x2b71d8
void e2d_id58_com_start_transformation_0x2b70f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_com_start_transformation_0x2b70f0");
#endif

    ctx->pc = 0x2b70f0u;

    // 0x2b70f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b70f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b70f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b70f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b70f8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2b70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2b70fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b70fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7100: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7104: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b7104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b7108: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b7108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b710c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b7110: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7114: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7118: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2b7118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2b711c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7120: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7124: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b7124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7128: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b7128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b712c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7130: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b7130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7134: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7138: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b7138u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b713c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b713cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7140: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b7140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7148: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b7148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b714c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b714cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b7150: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7154: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b7154u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b7158: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b7158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b715c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b715cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7160: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7164: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b7164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b7168: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b7168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b716c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b7170: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b7170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b7174: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b7174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b7178: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b7178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b717c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7180: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2b7180u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b7184: 0x0  nop
    ctx->pc = 0x2b7184u;
    // NOP
    // 0x2b7188: 0x0  nop
    ctx->pc = 0x2b7188u;
    // NOP
    // 0x2b718c: 0x1810  mfhi        $v1
    ctx->pc = 0x2b718cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b7190: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b7190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b7194: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7198: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b7198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b719c: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2b719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2b71a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b71a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b71a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b71a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b71a8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b71a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b71ac: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2b71acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2b71b0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2b71b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2b71b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b71b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b71b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b71bc: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b71bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b71c0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2b71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b71c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b71c8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b71cc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b71ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b71d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B71D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B71D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B71D8u;
}
