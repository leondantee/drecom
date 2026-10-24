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

// Function: entry_002ff984
// Address: 0x2ff984 - 0x2ff9f0
void entry_002ff984_0x2ff984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ff984_0x2ff984");
#endif

    ctx->pc = 0x2ff984u;

    // 0x2ff984: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff988: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2ff988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff98c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2ff98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ff990: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ff990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ff994: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x2ff994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ff998: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2ff998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2ff99c: 0x44200  sll         $t0, $a0, 8
    ctx->pc = 0x2ff99cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2ff9a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff9a4: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x2ff9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff9a8: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x2ff9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ff9ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ff9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ff9b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ff9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ff9b4: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x2ff9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2ff9b8: 0x43a02  srl         $a3, $a0, 8
    ctx->pc = 0x2ff9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2ff9bc: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2ff9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2ff9c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff9c4: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x2ff9c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ff9c8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ff9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ff9cc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x2ff9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ff9d0: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x2ff9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2ff9d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF9D4u;
    {
        const bool branch_taken_0x2ff9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9d4) {
            ctx->pc = 0x2FF9F0u;
            return;
        }
    }
    ctx->pc = 0x2FF9DCu;
    // 0x2ff9dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff9e0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2ff9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff9e4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2ff9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ff9e8: 0x148301ac  bne         $a0, $v1, . + 4 + (0x1AC << 2)
    ctx->pc = 0x2FF9E8u;
    {
        const bool branch_taken_0x2ff9e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff9e8) {
            ctx->pc = 0x30009Cu;
            return;
        }
    }
    ctx->pc = 0x2FF9F0u;
}
