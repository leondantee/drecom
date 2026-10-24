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

// Function: entry_00227ca4
// Address: 0x227ca4 - 0x227d4c
void entry_00227ca4_0x227ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227ca4_0x227ca4");
#endif

    switch (ctx->pc) {
        case 0x227cb0u: goto label_227cb0;
        case 0x227cf0u: goto label_227cf0;
        default: break;
    }

    ctx->pc = 0x227ca4u;

    // 0x227ca4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227ca8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x227CA8u;
    SET_GPR_U32(ctx, 31, 0x227CB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x227CA8u, 0x227CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CB0u;
label_227cb0:
    // 0x227cb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227cb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227cb4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227cb8: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x227cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x227cbc: 0x1060025c  beqz        $v1, . + 4 + (0x25C << 2)
    ctx->pc = 0x227CBCu;
    {
        const bool branch_taken_0x227cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227cbc) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x227CC4u;
    // 0x227cc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227cc8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227ccc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x227cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x227cd0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227cd4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227cd8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x227cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x227cdc: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x227cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x227ce0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x227ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227ce4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x227ce8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x227CE8u;
    SET_GPR_U32(ctx, 31, 0x227CF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x227CE8u, 0x227CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CF0u;
label_227cf0:
    // 0x227cf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227cf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227cf4: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x227cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x227cf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227cfc: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x227cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x227d00: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227d04: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227d08: 0x8c920030  lw          $s2, 0x30($a0)
    ctx->pc = 0x227d08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x227d0c: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x227d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x227d10: 0x2451824  and         $v1, $s2, $a1
    ctx->pc = 0x227d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x227d14: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x227d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x227d18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227d1c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x227d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x227d20: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x227d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x227d24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x227d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x227d28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227d2c: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x227d2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x227d30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227d34: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x227d34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x227d38: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x227d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x227d3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227d40: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x227d40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x227d44: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x227D44u;
    {
        const bool branch_taken_0x227d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227d44) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x227D4Cu;
}
