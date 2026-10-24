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

// Function: entry_00231adc
// Address: 0x231adc - 0x231ae4
void entry_00231adc_0x231adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231adc_0x231adc");
#endif

    ctx->pc = 0x231adcu;

    // 0x231adc: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231ae0: 0xa46011f4  sh          $zero, 0x11F4($v1)
    ctx->pc = 0x231ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4596), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x231ae4u;
}
