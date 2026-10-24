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

// Function: entry_0026d8f4
// Address: 0x26d8f4 - 0x26d9b4
void entry_0026d8f4_0x26d8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d8f4_0x26d8f4");
#endif

    switch (ctx->pc) {
        case 0x26d948u: goto label_26d948;
        default: break;
    }

    ctx->pc = 0x26d8f4u;

    // 0x26d8f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26d8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26d8fc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x26D8FCu;
    {
        const bool branch_taken_0x26d8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d8fc) {
            ctx->pc = 0x26D9B4u;
            return;
        }
    }
    ctx->pc = 0x26D904u;
    // 0x26d904: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d908: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x26d908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d90c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26d90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26d910: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26d910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26d914: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26d918: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x26d918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x26d91c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d920: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26d920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26d924: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26d924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26d928: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d92c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d934: 0x8c841340  lw          $a0, 0x1340($a0)
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x26d938: 0x8c651330  lw          $a1, 0x1330($v1)
    ctx->pc = 0x26d938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x26d93c: 0x8c461338  lw          $a2, 0x1338($v0)
    ctx->pc = 0x26d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x26d940: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x26D940u;
    SET_GPR_U32(ctx, 31, 0x26D948u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x26D940u, 0x26D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D948u;
label_26d948:
    // 0x26d948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d94c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26d950: 0xa0600090  sb          $zero, 0x90($v1)
    ctx->pc = 0x26d950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d958: 0xa46013ac  sh          $zero, 0x13AC($v1)
    ctx->pc = 0x26d958u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5036), (uint16_t)GPR_U32(ctx, 0));
    // 0x26d95c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d960: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d964: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26d964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d968: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x26d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26d96c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d970: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26d970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d974: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d978: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26d978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d97c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d980: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26d980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d984: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d988: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26d988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x26d98c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d990: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x26d990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
    // 0x26d994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d998: 0xac6013ec  sw          $zero, 0x13EC($v1)
    ctx->pc = 0x26d998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5100), GPR_U32(ctx, 0));
    // 0x26d99c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d9a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x26d9a4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x26d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x26d9a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26d9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26d9ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d9b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x26d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x26d9b4u;
}
