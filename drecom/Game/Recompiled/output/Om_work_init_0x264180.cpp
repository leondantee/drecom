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

// Function: Om_work_init
// Address: 0x264180 - 0x264264
void Om_work_init_0x264180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_work_init_0x264180");
#endif

    switch (ctx->pc) {
        case 0x264204u: goto label_264204;
        case 0x264210u: goto label_264210;
        default: break;
    }

    ctx->pc = 0x264180u;

    // 0x264180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264184: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x264184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x264188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26418c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264190: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264194: 0xac20fca4  sw          $zero, -0x35C($at)
    ctx->pc = 0x264194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FCA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCA4u, _value); } while (0);
    // 0x264198: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26419c: 0xac20fca8  sw          $zero, -0x358($at)
    ctx->pc = 0x26419cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FCA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCA8u, _value); } while (0);
    // 0x2641a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641a4: 0xac20fcac  sw          $zero, -0x354($at)
    ctx->pc = 0x2641a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FCACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCACu, _value); } while (0);
    // 0x2641a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641ac: 0xa020e651  sb          $zero, -0x19AF($at)
    ctx->pc = 0x2641acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E651u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E651u, _value); } while (0);
    // 0x2641b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641b4: 0xa020e653  sb          $zero, -0x19AD($at)
    ctx->pc = 0x2641b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E653u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E653u, _value); } while (0);
    // 0x2641b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641bc: 0xa020e674  sb          $zero, -0x198C($at)
    ctx->pc = 0x2641bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E674u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E674u, _value); } while (0);
    // 0x2641c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641c4: 0xa020e650  sb          $zero, -0x19B0($at)
    ctx->pc = 0x2641c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    // 0x2641c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641cc: 0x8c22e684  lw          $v0, -0x197C($at)
    ctx->pc = 0x2641ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E684u));
    // 0x2641d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641d4: 0xac22e680  sw          $v0, -0x1980($at)
    ctx->pc = 0x2641d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E680u, _value); } while (0);
    // 0x2641d8: 0x24021400  addiu       $v0, $zero, 0x1400
    ctx->pc = 0x2641d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x2641dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641e0: 0xac22e678  sw          $v0, -0x1988($at)
    ctx->pc = 0x2641e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E678u, _value); } while (0);
    // 0x2641e4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2641e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2641e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2641e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2641ec: 0xac22e67c  sw          $v0, -0x1984($at)
    ctx->pc = 0x2641ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E67Cu, _value); } while (0);
    // 0x2641f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2641f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2641f4: 0x2451e690  addiu       $s1, $v0, -0x1970
    ctx->pc = 0x2641f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960784));
    // 0x2641f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2641f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2641fc: 0xc09909c  jal         func_264270
    ctx->pc = 0x2641FCu;
    SET_GPR_U32(ctx, 31, 0x264204u);
    ctx->pc = 0x264270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264270u, 0x2641FCu, 0x264204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264204u;
label_264204:
    // 0x264204: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x264204u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264208u;
    {
        const bool branch_taken_0x264208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264208) {
            ctx->pc = 0x264228u;
            goto label_264228;
        }
    }
    ctx->pc = 0x264210u;
label_264210:
    // 0x264210: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x264214: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x264218: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x264218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x26421c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264220: 0xac711390  sw          $s1, 0x1390($v1)
    ctx->pc = 0x264220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5008), GPR_U32(ctx, 17));
    // 0x264224: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_264228:
    // 0x264228: 0x2e030080  sltiu       $v1, $s0, 0x80
    ctx->pc = 0x264228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x26422c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26422Cu;
    {
        const bool branch_taken_0x26422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26422c) {
            ctx->pc = 0x264210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264210;
        }
    }
    ctx->pc = 0x264234u;
    // 0x264234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x264238: 0x8c241b20  lw          $a0, 0x1B20($at)
    ctx->pc = 0x264238u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1B20u));
    // 0x26423c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x26423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x264240: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x264240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x264244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x264244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x264248: 0xac231b20  sw          $v1, 0x1B20($at)
    ctx->pc = 0x264248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1B20u, _value); } while (0);
    // 0x26424c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x26424cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x264258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26425c: 0x3e00008  jr          $ra
    ctx->pc = 0x26425Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26425Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264264u;
}
