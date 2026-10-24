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

// Function: Pl_sword_swing
// Address: 0x27fb90 - 0x27fc6c
void Pl_sword_swing_0x27fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_sword_swing_0x27fb90");
#endif

    switch (ctx->pc) {
        case 0x27fbb0u: goto label_27fbb0;
        case 0x27fc38u: goto label_27fc38;
        case 0x27fc58u: goto label_27fc58;
        default: break;
    }

    ctx->pc = 0x27fb90u;

    // 0x27fb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27fb94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27fb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27fb9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x27fb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x27fba0: 0x8c30bb48  lw          $s0, -0x44B8($at)
    ctx->pc = 0x27fba0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB48u));
    // 0x27fba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fba8: 0xc084964  jal         func_212590
    ctx->pc = 0x27FBA8u;
    SET_GPR_U32(ctx, 31, 0x27FBB0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FBA8u, 0x27FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBB0u;
label_27fbb0:
    // 0x27fbb0: 0x3c024624  lui         $v0, 0x4624
    ctx->pc = 0x27fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17956 << 16));
    // 0x27fbb4: 0x34426c00  ori         $v0, $v0, 0x6C00
    ctx->pc = 0x27fbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27648);
    // 0x27fbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fbbc: 0x0  nop
    ctx->pc = 0x27fbbcu;
    // NOP
    // 0x27fbc0: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x27fbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x27fbc4: 0x3c02c554  lui         $v0, 0xC554
    ctx->pc = 0x27fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50516 << 16));
    // 0x27fbc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27fbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fbd0: 0x0  nop
    ctx->pc = 0x27fbd0u;
    // NOP
    // 0x27fbd4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27fbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27fbd8: 0x3c024544  lui         $v0, 0x4544
    ctx->pc = 0x27fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17732 << 16));
    // 0x27fbdc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x27fbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x27fbe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fbe4: 0x0  nop
    ctx->pc = 0x27fbe4u;
    // NOP
    // 0x27fbe8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x27fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x27fbec: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x27fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x27fbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fbf4: 0x0  nop
    ctx->pc = 0x27fbf4u;
    // NOP
    // 0x27fbf8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27fbfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27fbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27fc00: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x27fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27fc04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27fc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27fc08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27fc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27fc0c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x27fc0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x27fc10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27fc14: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x27fc14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27fc18: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x27fc18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fc1c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x27fc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fc24: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x27fc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x27fc28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x27fc2c: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x27fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x27fc30: 0xc084964  jal         func_212590
    ctx->pc = 0x27FC30u;
    SET_GPR_U32(ctx, 31, 0x27FC38u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FC30u, 0x27FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC38u;
label_27fc38:
    // 0x27fc38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27fc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27fc3c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x27fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27fc40: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x27fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x27fc44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27fc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27fc48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27fc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27fc4c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x27fc4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x27fc50: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27FC50u;
    SET_GPR_U32(ctx, 31, 0x27FC58u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27FC50u, 0x27FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC58u;
label_27fc58:
    // 0x27fc58: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27fc58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fc5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fc60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27fc64: 0x3e00008  jr          $ra
    ctx->pc = 0x27FC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FC6Cu;
}
