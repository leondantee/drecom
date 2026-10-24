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

// Function: entry_001e8928
// Address: 0x1e8928 - 0x1e89ac
void entry_001e8928_0x1e8928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8928_0x1e8928");
#endif

    ctx->pc = 0x1e8928u;

    // 0x1e8928: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e892c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e892cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1e8930: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1e8930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1e8934: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E8934u;
    {
        const bool branch_taken_0x1e8934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8934) {
            ctx->pc = 0x1E8A00u;
            return;
        }
    }
    ctx->pc = 0x1E893Cu;
    // 0x1e893c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8940: 0x946411f4  lhu         $a0, 0x11F4($v1)
    ctx->pc = 0x1e8940u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x1e8944: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e8944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e8948: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E8948u;
    {
        const bool branch_taken_0x1e8948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8948) {
            ctx->pc = 0x1E89ACu;
            return;
        }
    }
    ctx->pc = 0x1E8950u;
    // 0x1e8950: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8954: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x1e8954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
    // 0x1e8958: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1e8958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e895c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e895cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1e8960: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e8964: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e8964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e8968: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x1e8968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1e896c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1e896cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e8970: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1e8970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1e8974: 0x0  nop
    ctx->pc = 0x1e8974u;
    // NOP
    // 0x1e8978: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8978u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e897c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x1e897cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1e8980: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e8984: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1e8984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e8988: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1e8988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1e898c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e898cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e8990: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e8994: 0x8424ef68  lh          $a0, -0x1098($at)
    ctx->pc = 0x1e8994u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x1e8998: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1e8998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e899c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e89a0: 0xa426ef68  sh          $a2, -0x1098($at)
    ctx->pc = 0x1e89a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    // 0x1e89a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E89A4u;
    {
        const bool branch_taken_0x1e89a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e89a4) {
            ctx->pc = 0x1E8A00u;
            return;
        }
    }
    ctx->pc = 0x1E89ACu;
}
