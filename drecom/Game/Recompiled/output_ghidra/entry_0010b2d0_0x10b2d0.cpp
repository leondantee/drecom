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

// Function: entry_0010b2d0
// Address: 0x10b2d0 - 0x10b3b0
void entry_0010b2d0_0x10b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b2d0_0x10b2d0");
#endif

    ctx->pc = 0x10b2d0u;

    // 0x10b2d0: 0x8c433d0c  lw          $v1, 0x3D0C($v0)
    ctx->pc = 0x10b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15628)));
    // 0x10b2d4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b2d8: 0x8d823d10  lw          $v0, 0x3D10($t4)
    ctx->pc = 0x10b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15632)));
    // 0x10b2dc: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
    // 0x10b2e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b2e4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x10b2e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x10b2e8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x10b2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10b2ec: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x10b2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b2f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b2f4: 0x24120180  addiu       $s2, $zero, 0x180
    ctx->pc = 0x10b2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10b2f8: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x10b2f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10b2fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b300: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x10b300u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b304: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x10b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x10b308: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x10b308u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x10b30c: 0x18e8824  and         $s1, $t4, $t6
    ctx->pc = 0x10b30cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x10b310: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x10b310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x10b314: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b318: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x10b318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10b31c: 0x8fad0060  lw          $t5, 0x60($sp)
    ctx->pc = 0x10b31cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b320: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x10b320u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x10b324: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10b328: 0x8fb40068  lw          $s4, 0x68($sp)
    ctx->pc = 0x10b328u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10b32c: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x10b32cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x10b330: 0x1ae7824  and         $t7, $t5, $t6
    ctx->pc = 0x10b330u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x10b334: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x10b334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x10b338: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x10b338u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x10b33c: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x10b33cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x10b340: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x10b340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10b344: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x10b344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10b348: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x10b348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x10b34c: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x10b34cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x10b350: 0x1936025  or          $t4, $t4, $s3
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 19));
    // 0x10b354: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b35c: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x10b35cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x10b360: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x10b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x10b364: 0x28e1824  and         $v1, $s4, $t6
    ctx->pc = 0x10b364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 14));
    // 0x10b368: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x10b368u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x10b36c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x10b36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x10b370: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x10b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x10b374: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10b374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10b378: 0x1b36825  or          $t5, $t5, $s3
    ctx->pc = 0x10b378u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 19));
    // 0x10b37c: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x10b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x10b380: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x10b380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x10b384: 0xad0f0000  sw          $t7, 0x0($t0)
    ctx->pc = 0x10b384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x10b388: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x10b388u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x10b38c: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x10b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x10b390: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x10b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b394: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x10b394u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x10b398: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10b398u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b39c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b39cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b3a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b3a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3A8u;
        // 0x10b3ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B3B0u;
}
