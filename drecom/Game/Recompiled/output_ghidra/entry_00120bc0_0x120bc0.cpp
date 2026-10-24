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

// Function: entry_00120bc0
// Address: 0x120bc0 - 0x120c58
void entry_00120bc0_0x120bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120bc0_0x120bc0");
#endif

    ctx->pc = 0x120bc0u;

    // 0x120bc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120bc4: 0x906411ee  lbu         $a0, 0x11EE($v1)
    ctx->pc = 0x120bc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x120bc8: 0x10800859  beqz        $a0, . + 4 + (0x859 << 2)
    ctx->pc = 0x120BC8u;
    {
        const bool branch_taken_0x120bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120bc8) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x120BD0u;
    // 0x120bd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x120bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x120bd4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x120bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x120bd8: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x120bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x120bdc: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x120BDCu;
    {
        const bool branch_taken_0x120bdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x120bdc) {
            ctx->pc = 0x120CE8u;
            return;
        }
    }
    ctx->pc = 0x120BE4u;
    // 0x120be4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120be8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x120be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x120bec: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x120becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x120bf0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x120bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x120bf4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x120BF4u;
    {
        const bool branch_taken_0x120bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120bf4) {
            ctx->pc = 0x120C58u;
            return;
        }
    }
    ctx->pc = 0x120BFCu;
    // 0x120bfc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120c00: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x120c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
    // 0x120c04: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x120c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x120c08: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x120c08u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x120c0c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x120c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x120c10: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x120c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x120c14: 0x34646667  ori         $a0, $v1, 0x6667
    ctx->pc = 0x120c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x120c18: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x120c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120c1c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x120c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x120c20: 0x0  nop
    ctx->pc = 0x120c20u;
    // NOP
    // 0x120c24: 0x2010  mfhi        $a0
    ctx->pc = 0x120c24u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x120c28: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x120c28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x120c2c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x120c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x120c30: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x120c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x120c34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x120c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x120c38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x120c38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x120c3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120c40: 0x8425ef68  lh          $a1, -0x1098($at)
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x120c44: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x120c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120c48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120c4c: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x120c4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    // 0x120c50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x120C50u;
    {
        const bool branch_taken_0x120c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120c50) {
            ctx->pc = 0x120CACu;
            return;
        }
    }
    ctx->pc = 0x120C58u;
}
