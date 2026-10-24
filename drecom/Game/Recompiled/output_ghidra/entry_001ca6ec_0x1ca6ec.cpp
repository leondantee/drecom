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

// Function: entry_001ca6ec
// Address: 0x1ca6ec - 0x1ca75c
void entry_001ca6ec_0x1ca6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca6ec_0x1ca6ec");
#endif

    ctx->pc = 0x1ca6ecu;

    // 0x1ca6ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca6f4: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1ca6f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca6fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ca700: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca704: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ca704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ca708: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1ca708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1ca70c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1ca70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca710: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1ca710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ca714: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1ca714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1ca718: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca71c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca720: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ca720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1ca724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ca724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca728: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ca728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ca72c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca730: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ca730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ca734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ca734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca738: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ca738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ca73c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA73Cu;
    {
        const bool branch_taken_0x1ca73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca73c) {
            ctx->pc = 0x1CA75Cu;
            return;
        }
    }
    ctx->pc = 0x1CA744u;
    // 0x1ca744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca748: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca74c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ca74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ca750: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ca750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca758: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1ca758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1ca75cu;
}
