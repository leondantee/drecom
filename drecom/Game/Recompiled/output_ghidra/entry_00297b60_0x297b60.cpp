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

// Function: entry_00297b60
// Address: 0x297b60 - 0x297c14
void entry_00297b60_0x297b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297b60_0x297b60");
#endif

    ctx->pc = 0x297b60u;

    // 0x297b60: 0x2e03000e  sltiu       $v1, $s0, 0xE
    ctx->pc = 0x297b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x297b64: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x297B64u;
    {
        const bool branch_taken_0x297b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297b64) {
            ctx->pc = 0x297B0Cu;
            return;
        }
    }
    ctx->pc = 0x297B6Cu;
    // 0x297b6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297b70: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x297b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    // 0x297b74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297b78: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x297b78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297b7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297b80: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x297b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x297b84: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x297b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x297b88: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x297b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x297b8c: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x297b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x297b90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297b90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297b94: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x297b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x297b98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x297b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297b9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297ba0: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x297ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297ba4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ba8: 0x24631340  addiu       $v1, $v1, 0x1340
    ctx->pc = 0x297ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x297bac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x297bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x297bb0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x297bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x297bb4: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x297bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x297bb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297bbc: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x297bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x297bc0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x297bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297bc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297bc8: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x297bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297bcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297bd0: 0x24631344  addiu       $v1, $v1, 0x1344
    ctx->pc = 0x297bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4932));
    // 0x297bd4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x297bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x297bd8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x297bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x297bdc: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x297bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x297be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297be4: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x297be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x297be8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x297be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297bec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297bf0: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x297bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297bf4: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x297bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x297bf8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x297bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x297bfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x297bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x297c00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297c04: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x297c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297c08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x297c08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297c0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x297C0Cu;
    {
        const bool branch_taken_0x297c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c0c) {
            ctx->pc = 0x297CA0u;
            return;
        }
    }
    ctx->pc = 0x297C14u;
}
