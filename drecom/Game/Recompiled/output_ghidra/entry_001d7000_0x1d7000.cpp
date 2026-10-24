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

// Function: entry_001d7000
// Address: 0x1d7000 - 0x1d70d8
void entry_001d7000_0x1d7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7000_0x1d7000");
#endif

    ctx->pc = 0x1d7000u;

    // 0x1d7000: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1d7000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d7004: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d700c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1d700cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1d7010: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1d7010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1d7014: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1d7014u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1d7018: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d7018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d701c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d7020: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1d7020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d7024: 0x131903  sra         $v1, $s3, 4
    ctx->pc = 0x1d7024u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 4));
    // 0x1d7028: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d7028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d702c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d702cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d7030: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1d7034: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d7034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d7038: 0x10193c  dsll32      $v1, $s0, 4
    ctx->pc = 0x1d7038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 4));
    // 0x1d703c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1d703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1d7040: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d7040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d7044: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d7044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d7048: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d7048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d704c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d704cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d7050: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1d7050u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1d7054: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1d7054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d7058: 0x132103  sra         $a0, $s3, 4
    ctx->pc = 0x1d7058u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 4));
    // 0x1d705c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1d705cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1d7060: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d7060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d7064: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x1d7064u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x1d7068: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1d7068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d706c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d706cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d7070: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d7070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d7074: 0x16a0ffb8  bnez        $s5, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1D7074u;
    {
        const bool branch_taken_0x1d7074 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7074) {
            ctx->pc = 0x1D6F58u;
            return;
        }
    }
    ctx->pc = 0x1D707Cu;
    // 0x1d707c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d707cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d7080: 0xac300ae8  sw          $s0, 0xAE8($at)
    ctx->pc = 0x1d7080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1d7084: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d7084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d7088: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1d7088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1d708c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1d7090: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d7090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7094: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1d7098: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d7098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d709c: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x1d709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1d70a0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1d70a4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d70a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d70a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d70ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d70acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d70b0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1d70b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d70b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d70b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d70b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d70b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d70bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d70bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d70c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d70c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d70c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d70c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d70c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d70c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70cc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1d70ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d70d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70D8u;
}
