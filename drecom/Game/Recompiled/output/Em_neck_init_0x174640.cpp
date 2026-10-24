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

// Function: Em_neck_init
// Address: 0x174640 - 0x1746d8
void Em_neck_init_0x174640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_neck_init_0x174640");
#endif

    ctx->pc = 0x174640u;

    // 0x174640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17464c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17464cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x174650: 0xa7a50028  sh          $a1, 0x28($sp)
    ctx->pc = 0x174650u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x174654: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x174654u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x174658: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x174658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x17465c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x17465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x174660: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x174660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x174664: 0x26240a68  addiu       $a0, $s1, 0xA68
    ctx->pc = 0x174664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x174668: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x17466c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x17466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x174670: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x174670u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x174674: 0x26250a68  addiu       $a1, $s1, 0xA68
    ctx->pc = 0x174674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x174678: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x174678u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x17467c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x17467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x174680: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x174680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x174684: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x174684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x174688: 0x8e300a68  lw          $s0, 0xA68($s1)
    ctx->pc = 0x174688u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x17468c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174690: 0xac701310  sw          $s0, 0x1310($v1)
    ctx->pc = 0x174690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4880), GPR_U32(ctx, 16));
    // 0x174694: 0x26240a68  addiu       $a0, $s1, 0xA68
    ctx->pc = 0x174694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x174698: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x174698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17469c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x17469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1746a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1746a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1746a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1746a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1746a8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1746a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1746ac: 0x97a30028  lhu         $v1, 0x28($sp)
    ctx->pc = 0x1746acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1746b0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1746b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1746b4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1746b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746b8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1746b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1746bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1746bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1746c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1746c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1746c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1746c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1746c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1746ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1746d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1746D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1746D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1746D8u;
}
