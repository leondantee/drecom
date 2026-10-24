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

// Function: entry_003135f0
// Address: 0x3135f0 - 0x3136a4
void entry_003135f0_0x3135f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003135f0_0x3135f0");
#endif

    switch (ctx->pc) {
        case 0x313684u: goto label_313684;
        default: break;
    }

    ctx->pc = 0x3135f0u;

    // 0x3135f0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3135f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3135f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3135f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135f8: 0x0  nop
    ctx->pc = 0x3135f8u;
    // NOP
    // 0x3135fc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3135fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x313600: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x313600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x313604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313608: 0x0  nop
    ctx->pc = 0x313608u;
    // NOP
    // 0x31360c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x313610: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x313610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x313614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313618: 0x0  nop
    ctx->pc = 0x313618u;
    // NOP
    // 0x31361c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x313620: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x313620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x313624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313628: 0x0  nop
    ctx->pc = 0x313628u;
    // NOP
    // 0x31362c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x313630: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x313630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x313634: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x313634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x313638: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x313638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x31363c: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x31363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x313640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313644: 0x0  nop
    ctx->pc = 0x313644u;
    // NOP
    // 0x313648: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x313648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x31364c: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x31364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x313650: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x313650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x313654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313658: 0x0  nop
    ctx->pc = 0x313658u;
    // NOP
    // 0x31365c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x31365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x313660: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313664: 0xa202011b  sb          $v0, 0x11B($s0)
    ctx->pc = 0x313664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x313668: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x313668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31366c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31366cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x313670: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x313670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x313674: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x313674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x313678: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x313678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31367c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31367Cu;
    SET_GPR_U32(ctx, 31, 0x313684u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31367Cu, 0x313684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313684u;
label_313684:
    // 0x313684: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x313684u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313688: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x313688u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x31368c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31368cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313698: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x313698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31369c: 0x3e00008  jr          $ra
    ctx->pc = 0x31369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3136A4u;
}
