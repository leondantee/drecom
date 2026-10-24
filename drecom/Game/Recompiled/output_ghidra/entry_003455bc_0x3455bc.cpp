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

// Function: entry_003455bc
// Address: 0x3455bc - 0x3455e0
void entry_003455bc_0x3455bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003455bc_0x3455bc");
#endif

    ctx->pc = 0x3455bcu;

    // 0x3455bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3455bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3455c0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3455c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3455c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3455c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3455c8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3455c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3455cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3455CCu;
    {
        const bool branch_taken_0x3455cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3455cc) {
            ctx->pc = 0x3455E8u;
            return;
        }
    }
    ctx->pc = 0x3455D4u;
    // 0x3455d4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3455d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3455d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3455d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3455dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3455dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x3455e0u;
}
